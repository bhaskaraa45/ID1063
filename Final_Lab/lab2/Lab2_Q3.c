#include<stdio.h>

int main(){
    int a,b,c,count=3;
    float sum,avg;
    printf("Enter 3 integers : ");
    scanf("%d%d%d",&a,&b,&c);

    //maximum & minimum
    a>b? b>c? printf("Maximum = %d\nMinimum = %d\n",a,c) : a>c? printf("Maximum = %d\nMinimum = %d\n",a,b) : printf("Maximum = %d\nMinimum = %d\n",c,b) : a>c? printf("Maximum = %d\nMinimum = %d\n",b,c) : b>c? printf("Maximum = %d\nMinimum = %d\n",b,a) : printf("Maximum = %d\nMinimum = %d\n",c,a);
    //average
    a<=0? a=0,count--:1;
    b<=0? b=0,count--:1;
    c<=0? c=0,count--:1;
    sum=a+b+c;
    count!=0? avg=sum/count,printf("Average of Positive inputs (>0) = %f",avg) : printf("Average Can't calculate as no input is greater than zero");

    return 0;
}