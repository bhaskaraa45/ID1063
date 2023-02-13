#include<stdio.h>
int main(){
    int n,a,b,sum;
    while((scanf("%d%d%d",&n,&a,&b))!=-1){
        sum=0;
    for (int i = n-1; i >0; i--)
    {
        if(i%a==0 || i%b==0){
            sum += i;
        }
    }
    printf("%d\n",sum);
}    
    return 0;
}