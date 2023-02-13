#include<stdio.h>
int count[1];
int factorOfTWO(int n){
    count[0]=1;
    for (int i = 0;; i++)
    {   
        if (n%2==0 && n>2 )
        {
           n = n/2;
           count[0]++;
        }
        if (n==2)
        {
            return 1;
            break;
        }
        if (n%2!=0 && n>2)
        {
            return 0;
            break;
        }        
    }    
}

//the function will take m and k and it will print m^k
void power(unsigned long long m,unsigned long long k){
    unsigned long long n=1;

    if (factorOfTWO(k)==1){

        for (unsigned long long i = 0; i < count[0]; i++)
        {
            m = m*m;
        }
    }
    else{
        for (int i = 1; i <= k; i++)
        {
            n = n*m;
        }
        m = n;
    }


    printf("m^k = %llu\n",m);
}

int main(){
    unsigned long long m,k;

    while((scanf("%llu%llu",&m,&k))!=-1){
        power(m,k);
    }
    

    return 0;
}