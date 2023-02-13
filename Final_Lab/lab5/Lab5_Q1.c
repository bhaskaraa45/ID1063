#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//#AA45

bool isfib(int n) {
    int t=0,t1=1,t2=-1,temp=0;

    for (int i = 0; i<46; i++)//46 bcz after 46th term the number will be too large for a int data type .. int cant store that much big value
    {   
        t=t1+t2;
        t2=t1;
        t1=t;

        if(n==t){
            temp=1;
            break;
        }

    }
    if(temp==0){
        return false;
    }else{
        return true;
    }
    

}


void printfib(int num1, int num2)
{

    int c;
    int min,max;
    min = num1>num2? num2 : num1;
    max = num1>num2? num1 : num2;

    int t=0,t1=1,t2=-1,count1=0,count2=0,termMinus1=-1,temp=1;


   
    int i=1;
    while (1)
    {
        t=t1+t2;
        t2=t1;
        t1=t;

        if (min==t)
        {
            count1=i;
            termMinus1=t2;
        }
        if (max==t)
        {
            count2=i;
            break;
        }
        i++;
        
    }

    if(count2-count1 >1){
        if (min==0)
        {
            min=1;
            termMinus1=0;
            count2--;    
        }
        
    for (int j = count1+1; j <count2 ; j++)
    {
        t=min+termMinus1;
        termMinus1=min;
        min=t;
        c=t;
        printf("%d ", c);
    }
    }
    else
    {
        printf("no numbers");
    }
        printf("\n");

   // printf("%d ", c);
}




int main()
{
    int num1, num2 ;

    while (scanf("%d %d",&num1, &num2) != -1) {
        if (isfib(num1) && isfib(num2)) {
            printfib(num1, num2);
        } else {
            printf("no numbers");
            printf("\n");
        }
    }

    return 0;
}

