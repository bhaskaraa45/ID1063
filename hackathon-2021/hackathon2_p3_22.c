#include<stdio.h>
#include<stdlib.h>

int matching(char *str1,char *str2,int a,int l){
    int temp=1;
    for (int i = 0; i < l ; i++)
    {
        if (str2[i]!=str1[a+i])
        {
            temp++;
        }
        
    }
    if (temp==1)
        return 1;
    else
        return 0;
    
}

int fn(char *c){
    int count=0;
    for (int i =0 ;c[i]!= '\0'; i++)
    count++;

    return count;
}

int main(){
     int n,a,match,c;
    scanf("%d",&n);
     char ch[n],ch2[n];
    scanf("%s",&ch);

while (scanf("%s",&ch2)!=-1)
{   
    match=0,c=0;
   int l1 = fn(ch);
    int l2 = fn(ch2);
   int j=0;
    for (int i = 0 ; i <l1 ; i++)
    {
        if (ch2[0]==ch[i])
        {
            a=i;
            if (a+l2 <= l1)
            {
                match = matching(ch,ch2,a,l2);
            }
            
            if(match==1){
                printf("%d ",a);
                c=1;
                match=0;
            }
            
        }
        
    }
    
    if (c==0)
    {
        printf("-1");
    }
    
printf("\n");
}



    return 0;
}

