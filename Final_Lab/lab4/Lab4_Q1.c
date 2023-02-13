#include<stdio.h>
//print factorial of n

int main(){
int n,fact=1;
printf("enter number : ");
scanf("%d",&n);

for (int i = 1; i <=n ; i++)
{
    fact *=i;
}

printf("%d! = %d",n,fact);

    return 0;
}
