#include <stdio.h>

int main(){
    int n1,n2,n3,n4,n5,count=5;
    float sum,avg;
    printf("Enter 5 integers : ");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    //maximum
    int max=n1,min=n1;
    if (n2>max)
    {
        max=n2;
    }
    if (n3>max)
    {
        max=n3;
    }
    if (n4>max)
    {
        max=n4;
    }
    if (n5>max)
    {
        max=n5;
    }

    //minimum
    if(n2<min)
    {
        min=n2;
    }
    if(n3<min)
    {
        min=n3;
    }
    if(n4<min)
    {
        min=n4;
    }
    if(n5<min)
    {
        min=n5;
    }

//for avg
n1<=0? n1=0,count--:1 ;  
n2<=0? n2=0,count--:1 ;
n3<=0? n3=0,count--:1 ;
n4<=0? n4=0,count--:1 ;
n5<=0? n5=0,count--:1 ;

sum = n1+n2+n3+n4+n5;
    
    printf("Maximum = %d\nMinimum = %d\n",max,min);

if(count==0)
{
    printf("Average Can't be calculated as no input is greater than zero");
}
else{
    avg=sum/count;
    printf("Average of the positive inputs (>0) = %f",avg);
}

    return 0;
}