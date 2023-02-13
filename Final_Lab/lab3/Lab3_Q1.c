#include <stdio.h>

int main(){
int n;
int x;
x = 0;

printf("enter number : ");
scanf("%d",&n);
if (n<0)
{
    printf("Wrong Input");
}
else if(n==0 || n==1){
    printf("%d is a Non-Prime Number",n);
}
else{ 

    
for (int i = 2; i < n; i++)
{
    if (n%i==0)
    {
        x++;
    }
}

if (x==0)
{
    printf("%d is a Prime Number",n);
}
 else {
    printf("%d is a Non-Prime Number",n);}
   



  }   return 0;
}