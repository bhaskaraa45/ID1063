#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void add_minus(char *s){
    int l =strlen(s);
    for (int i = l-1; i >=0; i--)
    {
        char temp = s[i];
        s[i+1]=temp;
    }
    s[0]='-';
}

void del_minus(char *s){
    int l =strlen(s);
    for (int i = 0; i < l; i++)
    {
        char temp = s[i+1];
        s[i] = temp;
    }
}

char *max_function(char *s1,char *s2){
    int l =strlen(s1);

    for (int i = 0; i <l; i++)
    {
        if (s1[i]>s2[i])
        {
            return s1;
        }
        if (s2[i]>s1[i])
        {
           return s2;
        }
    }

}

char *min_function(char *s1,char *s2){
    int l =strlen(s1);

    for (int i = 0; i <l; i++)
    {
        if (s1[i]>s2[i])
        {
            return s2;
        }
        if (s2[i]>s1[i])
        {
           return s1;
        }
    }

}


void addition(char s1[],char s2[]){
    int l1=strlen(s1);
    int l2=strlen(s2);

    char temp[1001];
    int i=l1-1,j=l2-1,carry=0,k=0,sum=0;
    if (l1 == 1 && l2==1)
    {
        sum = s1[0] + s2[0] -96;
        if (sum>9)
        {
            sum = sum -10;
            temp[999]='1';
            k=2;
        }else 
            k=1;

        temp[1000] = sum+48;
        
    } else{
    
        while(j>=0){
            sum = s1[i] + s2[j] + carry - 96;
           
            if (sum>9)
            {
                sum = sum -10;
                carry = 1;
            }else
                carry =0;

            temp[1000-k] = sum+48 ; 
            k++;
            i--;
            j--;
        }

        while (i>=0)
        {
            
            sum = s1[i] + carry - 48;
            if (sum>9)
            {
                sum = sum -10;
                carry = 1;
            }else 
                carry=0;
            temp[1000-k] =sum+48;
            i--;
            k++;
            
        }
        if (carry!=0)
        {
            temp[1000-k]=carry+'0';
            k++;
        }
        

    }

        char *s;
        s = (char *)malloc(k*sizeof(char));


        j=0;
        for (int i = 1000-k+1;i<=1000; i++)
        {
            s[j]=temp[i];
            j++;
        }
        

        printf("%s",s);

}

void substraction(char ch1[],char ch2[]){
    del_minus(ch2);
    int l1=strlen(ch1);
    int l2=strlen(ch2);
if(strcmp(ch1,ch2)==0){
    // exit;
    printf("0");
}
else{
    char *s1 , *s2;
    if(l1>l2){
    s1 = ch1;
    s2 = ch2;
    }

    if(l2>l1){
        s1 = ch2;
        s2 = ch1;
        int tt=l1;
        l1=l2;
        l2=tt;
    }
    if (l1==l2)
    {
        s1 = max_function(ch1,ch2);
        s2 = min_function(ch1,ch2);
        
    
        if (max_function(ch1,ch2)==ch2)
        {
            printf("-");
        }
    }
    

    char temp[1001];
    int i=l1-1,j=l2-1,carry=0,k=0,sub=0;
    if (l1 == 2 && l2==1 && s1[0]=='1')
    {
        sub = s1[1] - s2[0] ;
        if (sub<0)
        {   
            sub =sub +10;
            carry = -1;
            temp[1000] = sub+48;
            k=1;
        } else{
            temp[999] = '1';
            temp[1000] = sub+48;
            k=2;

        }
    
        
    } else{
    
        while(j>=0){
            sub = s1[i] - s2[j] + carry ;
           
            if (sub<0)
            {
                sub = sub + 10;
                carry = -1;
            }else
                carry =0;

            temp[1000-k] = sub+48 ; 
            k++;
            i--;
            j--;
        }

        while (i>=0)
        {
            
            sub = s1[i] + carry - 48;
            if (sub<0)
            {
                sub = sub + 10;
                carry = -1;
            }else 
                carry=0;
            temp[1000-k] =sub+48;
            i--;
            k++;



        }

    }

    if (l1 == l2 && s1[0]==s2[0])
    {
        k=k-1;
    }
    

        char *s;
        s = (char *)malloc(k*sizeof(char));


        j=0;
        for (int i = 1000-k+1;i<=1000; i++)
        {
            s[j]=temp[i];
            j++;
        }

        printf("%s",s);

} 
}


void both_minus(char s1[],char s2[]){
    del_minus(s1);
    del_minus(s2);
    

    printf("-");
    addition(s1,s2);
    
}

int main(){
    char *ch1,*ch2;
        char *s;

    ch1=(char *)malloc(1000*sizeof(char));
    ch2=(char *)malloc(1000*sizeof(char));


    scanf("%s",ch1);
   
    while((scanf("%s",ch2))!=-1){
        int check=0;


    char *max , *min;
    int l1=strlen(ch1);
    int l2=strlen(ch2);

    max = ch1;
    min = ch2;

    if (ch1[0]!='-' && ch2[0]!='-'){
        
        if(l2>l1){   
        max = ch2;
        min = ch1;
        }

        addition(max,min);
    }
    else if(ch1[0]=='-' && ch2[0]=='-'){
        if(l2>l1){   
        max = ch2;
        min = ch1;
        check = 1;
        }

        both_minus(max,min);
    }
    else {
        if (ch1[0]=='-')
        {   

            if (l1-1 > l2)
            {
                printf("-");
                substraction(ch2,ch1);
            }
            else{
                substraction(ch2,ch1);
            }
        }
        else if(ch2[0]=='-'){

            check = 1;
            
            if(l2-1 > l1){
                printf("-");
                substraction(ch1,ch2);
            }
            else{
                substraction(ch1,ch2);

            }
        }
        
    }
    printf("\n");


    if (check == 1)
    {
        add_minus(ch2);
    }
     
     for (int i = 0; i < l2; i++)
     {
        ch1[i]=ch2[i];
     }
     ch1[l2]='\0';
     


    }

   
    return 0;
}