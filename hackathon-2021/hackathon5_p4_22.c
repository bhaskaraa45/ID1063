#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int fn(char *c){
    int count=0;
    for (int i =0 ;c[i]!= '\0'; i++)
    count++;

    return count;
}

void brackets(char *str, int l,int a){
    char temp1,temp2;
    int j=0;

    for (int i = 1; i < 4; i++)
    {
        temp1=str[a+i];
        str[a+j]=temp1;
        j++;
        i++;
    }

    for (int i = a+3; i < l; i++)
    {
        temp2=str[i+2];
        str[i]=temp2;
    }
}

void multiplication(char *str,int l,int a){
    char temp;
    if (str[a+2]=='+' || str[a+2]=='-' || str[a+2]=='*' || str[a+2]=='\0')
    {
        temp = str[a];
        str[a]=str[a+1];
        str[a+1]=temp;
    }else 
    {
        for (int i = 0; i < 3; i++)
        {
            temp = str[a+i+1];
            str[a+i]=temp;
        }
        str[a+3]= '*';
        
    }
    
}

void plus_minus(char *str,int l,int a){
    int n=-1;
    char temp;
    if (str[a+2]=='+' || str[a+2]=='-' || str[a+2]=='*' || str[a+2]=='\0')
    {
        temp = str[a];
        str[a]=str[a+1];
        str[a+1]=temp;
    }
    else{
        for (int i = a+3; i < l; i++)
        {
            if (str[i]=='+' || str[i]=='-')
            {
                if ((str[i-1]=='+' || str[i-1]=='-' || str[i-1]=='*') && (str[i+1]!='+' || str[i+1]!='-' || str[i+1]!='*'))
                {
                    n = i;
                    break;
                }
                
            }
            
        }
        char temp2=str[a];
        if (n!=-1){     
        
        for (int i = a; i < n-1; i++)
        {
            temp = str[i+1];
            str[i]=temp;
        }
        str[n-1] = temp2;
        }
        else{
            for (int i = a; i < l; i++)
            {
                temp = str[i+1];
                str[i]=temp;
            }
            str[l-1] = temp2;

            
        }
        
    }

}


int main(){
    
    char *str = (char *)malloc(sizeof(char)*1000);
    
    scanf("%s",str);
    int len = fn(str);
    int a;
   str = (char *)realloc(str , sizeof(char)*len);
    int i=0;
    while(i<len){
        if (str[i]=='(')
        {   
            a=i;
            brackets(str,len,a);
            // i = 0;
            len = fn(str);
            // continue;
        }
        i++;
    }
    
    a=0;
    i=0;
    
    while (i<len)
    {
        if (str[i]== '*')
        {
            if (str[i+1]!='+' && str[i+1]!='-' && str[i+1]!='*' && str[i+1]!='\0')
            {

                multiplication(str,len,i);
                // i=0;
                // continue;
            }
        }
        
        i++;
    }

    i=0;
    while (i<len)
    {
        if (i<2 && (str[i]== '+' || str[i]=='-'))
        {
            plus_minus(str,len,i);
        }
        

        else if (i>=2 && (str[i]== '+' || str[i]=='-'))
        {
            if ((str[i-1]=='+' || str[i-1]=='-' || str[i-1]=='*') &&  (str[i+1]!='+' && str[i+1]!='-' && str[i+1]!='*' && str[i+1]!='\0'))
            {

                plus_minus(str,len,i);
                // i=0;
                // continue;
            }
        }
        
        i++;
    }
    

    puts(str);
    
    free(str);

    return 0;
}