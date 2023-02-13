#include<stdio.h>
//fibaonacci sequence ... between 2 terms ...give input in any order

int main(){
int num1,num2,greater,smaller;

//input
printf("enter a number (greater than 1) : ");
scanf("%d",&num1);
printf("now enter the another number (greater than 1) : ");
scanf("%d",&num2);

//num1>=num2? greater=num1 , smaller=num2:num2>num1 ? greater=num2,smaller=num1 :  printf("");
  
    //for determine greater and smaller number
    if(num1>=num2){
        greater=num1;
        smaller=num2;
    } 
    else{
        greater=num2;
        smaller=num1;
    }

    //bcz 2nd and 3rd term of fibonacci seq. are 1
if (smaller == 0 || smaller == 1)
{
    printf("Wrong Input");
} 



else{

int t=0,t1=1,t2=1;
int count1=0,count2=0,term_smaller_minus_1 ;

for (int i = 3; i <= 46; i++)
{
    t=t1+t2;
    t2=t1;
    t1=t;
    
    if (smaller==t)
    {
        count1=i;
        term_smaller_minus_1 = t2;
    }
    
    if (greater==t)
    {
        count2=i;
        break;
    }
    
}

if (count1!=0 && count2!=0){
    printf("terms of fibonacci sequence between %d & %d are :\n",smaller,greater);
  
    printf("%d\t",smaller);
    for (int i = count1+1; i <= count2; i++)
    {
        t=smaller+term_smaller_minus_1;
        term_smaller_minus_1=smaller;
        smaller=t;
        printf("%d\t",t);
    }
    
}
    
else{
    printf("one of them or both are not belongs to fibonacci sequence");
    }

}
    return 0;
}
