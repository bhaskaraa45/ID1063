#include <stdio.h>
#include<stdlib.h>
int gcd(int a,int b,int sm){
    if(b%sm==0 && a%sm==0){
        return sm;
    }
    return gcd(a,b,sm-1);
}


int main(){
int a,b,smaller;

printf("Enter 2 number : "); 
scanf("%d%d",&a,&b);  
smaller = a>b? b : a;

int ans = gcd(a,b,smaller);
printf("GCD of %d and %d : %d",a,b,ans);

    return 0;
}