#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define MAXSIZE 20

/* 
 * this function tests whether num is prime
 * returns true if prime
 * false if not prime
 */
bool is_prime(int num) {
    if (num==1 || num<1)
    {
        return false;
    }
    
    for (int i = 2; i <= num/2; i++)
    {
        if (num%i==0)
        {
            return false;
        }
        
    }
    return true;
    
}


int main() {
    int size;
    int arr[MAXSIZE];
    int i;


    while(scanf("%d",&size)!=-1) {
        for (i=0;i<size;i++) {
            scanf("%d",&arr[i]);
        }
        int count=0;

        for (int i = 0; i < size; i++)
        {
            if (is_prime(arr[i]))
            {
                printf("%d ",arr[i]);
                count++;
            }
            
        }


        // count==0 && size>0 ? printf("no numbers") : 1;
        size<=0? printf("no numbers\n") : count==0? printf("no numbers\n") : printf("\n");
       
        /*
         * Use printf("%d ", arr[i]); to print prime 
         * element in array
         * After printing all primes in array use printf("\n");
         * if no numbers use printf("no numbers\n"); - with or without "\n" based on your coding
         * The above is based on - every line represent corresponding output
         */
    }
        
    return 0;
}

