#include<stdio.h>

//printing sum of the inputs
void sum(unsigned long long a, unsigned long long b){
    printf("%llu\n",a+b);
}

int main(){
    unsigned long long a,b;
    while((scanf("%llu %llu",&a,&b))!=-1){
        sum(a,b);
    }

    return 0;
}