#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void addition(char ch1[],char ch2[]){
    int l1=strlen(ch1);
    int l2=strlen(ch2);
    char *s1 , *s2;
    
    
    s1 = ch1;
    s2 = ch2;

    if(l2>l1){
        s1 = ch2;
        s2 = ch1;
        int tt=l1;
        l1=l2;
        l2=tt;
    }

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

        while (i>=0 )
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


        
        ch1 = (char *)realloc(ch1,k*sizeof(char));


        j=0;
        for (int i = 1000-k+1;i<=1000; i++)
        {
            ch1[j]=temp[i];
            j++;
        }

}

void multi(char *s1,char *s2){
    // char s1[5] = "25" , s2[5] = "25";
    int multi=1,carry,k;
    int l1 =strlen(s1);
    int l2 =strlen(s2);

    char *temp,*temp2;
    char *shortt;

    temp = (char *)malloc(1001*sizeof(char));
    temp2 = (char *)malloc(1001*sizeof(char));
    shortt = (char *)malloc(1000*sizeof(char));


    


for(int j=l2-1;j>=0;j--){
        k=l2-j;
        carry=0;
        int mm = s2[j]-'0';

    for (int i = l1-1; i >=0; i--)
    {
        int num = s1[i]-'0';

        multi = num*mm + carry;
        if (multi>9)
        {
            carry = multi/10;
            multi = multi%10;

        }else
           carry =0;

        temp2[1001-k]=multi + '0';
        k++;    
}       
if (carry!=0)
{
    temp2[1001-k]=carry+'0';
    k++;
}



// shortt[0]=temp2[1000];
// printf("%d ",carry);
        // printf("%c",temp2[999]);
        // printf("%c",temp2[1000]);
        // printf("%s",temp2);
// printf("sizeof s before : %lu",sizeof(s));
// printf("%d ",k);


    // shortt = (char *)malloc(100 * sizeof(char));
// shortt[0]=1;
// shortt[1]=2;
// printf("%c",shortt[0]);
// printf("sizeof s after : %lu",sizeof(shortt));
k--;
// printf("%d %d\n",k,l2-j);
int temporary=0;
        for (int i = k; i >0; i--)
        {
            if (i>=(l2-j))
            {
            shortt[temporary]=temp2[1001-i];
            // printf("c\t");
                
            }else{
                shortt[temporary]='0';
            }
            temporary++;
            
        }
        shortt[temporary]='\0';
// puts("");
    // printf("%s\t",shortt);  
    addition(temp,shortt);  
    free(shortt);

    }
    puts(temp);
    

}









int main(){
    char *ch1,*ch2,s[5];
    

    ch1=(char *)malloc(500*sizeof(char));
    ch2=(char *)malloc(500*sizeof(char));
    // strcpy(ch1,"225");
    // strcpy(ch2,"900");
    

   
    scanf("%s%s",ch1,ch2);
        // addition(ch1,ch2);

        // printf("%s",ch1);
        multi(ch1,ch2);
    
    

    return 0;
}