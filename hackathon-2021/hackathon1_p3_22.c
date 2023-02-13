#include<stdio.h>
#include<stdlib.h>


int fn(char *c){
    int count=0;
    for (int i =0 ;c[i]!= '\0'; i++)
    count++;

    return count;
}

int main(){
    char ch[1000],opens[1000];
   
while((scanf("%s", ch))!=-1){
    int n,m=0,normal=0,square=0,well=1;
    n=fn(ch);

for (int i = 0; i < n; i++)
{
    
    if (ch[i]==')')
    {
        normal--;
    }

    if (ch[i]==']')
    {
        square--;
    }


    if (ch[i]=='(')
    {
        opens[m]='(' ;
        m++;
        normal++;
    }

    if (ch[i]=='[')
    {
        opens[m]='[' ;
        m++;
        square++;
    }
    

    if (ch[i]==')' || ch[i]==']')
    {   
        m--;
        if (ch[i]==')' && opens[m]!='(' ){
            well=-1;
            break;
        }
        if (ch[i]==']' && opens[m]!='['){
            well=-1;
            break;
        }
 
    }
    
    if (square<0 || normal<0)
    {
        well=-1;
        break;
    }
    
}

if (square==0 && normal==0)
    well=1;
else
    well=-1;


//output
if (well==-1)
    printf("0\n");
else if(well==1)
    printf("1\n");

   }
    return 0;
}
