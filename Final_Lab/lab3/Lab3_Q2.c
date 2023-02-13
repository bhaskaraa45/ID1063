#include <stdio.h>

int main(){
float n=1 , numbers,max,min,sum=0;

printf("Enter integer-1 : ");
scanf("%f",&numbers);

    max=numbers;
    min=numbers;
    sum=numbers;

while(1)
{   
    printf("Enter integer-%.0f or 0.5 to terminate : ",n+1);
    scanf("%f",&numbers);
    if (numbers>0 && numbers<1)
    {
        break;
    }
    else{
    if (numbers>max)
    {
        max=numbers;
    }
    
    if (numbers<min)
    {
        min=numbers;
    }
    
    sum = sum + numbers;
    n++;
    }
}

printf("Maximum =%.0f\n",max);
printf("Minimum =%.0f\n",min);
printf("Average =%.2f\n", sum/n);

    return 0;
}