#include<stdio.h>

int main(){
int a,b,min,ans;
printf("Enter two integers : ")
scanf("%d%d",&a,&b);
min = a>b? b : a;

for (int i = min; i > 0; i--)
{
    if (a%i==0 && b%i==0)
    {
        ans=i;
        break;
    }
}
printf("GCD of %d & %d is %d\n",a,b,ans);
    return 0;
}
