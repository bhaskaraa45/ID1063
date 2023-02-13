#include<stdio.h>
#include<stdlib.h>
int main(){


    int n,R,r,temp1,temp2,count;
    while(1){

    printf("Enter n(size of array) : ");
    scanf("%d",&n);

    int *arr;
    arr= (int*)malloc(n*sizeof(int)); //n size array

    printf("Now enter %d size array : ",n);
    for (int i = 0; i < n; i++)
    {    
        scanf("%d",&arr[i]);
    }

    printf("Enter r : ");
    scanf("%d",&R);

    //r is term number of the array(1 index counting)... here the term will be arr[r-1] bcz here  "0 index counting"
    r=R-1;
    int x=arr[r];
    count=0;
while (1)
{
temp1=0;temp2=0;
    for (int i = r+1; i <n ; i++)
    { 
        if (arr[i]<x)
        {
            arr[r]=arr[i];
            arr[i]=x;
            r=i;
            count+=2;
        }
        else
            temp1++;
        
    }

    for (int j = 0; j < r ; j++)
    {   
        if (arr[j]>x)
        {
            arr[r]=arr[j];
            arr[j]=x;
            r=j;
            count+=2;
        }
        else
            temp2++;
    }
    
    if (temp1==n-r-1 && temp2==r)
    {
        break;
    }   
    
}

printf("arranged array : \n");
for (int i = 0; i < n; i++)
{
    printf("%d ",arr[i]);
}
printf("\nCount = %d\n",count);
puts("");

free(arr);
    }
    return 0;
}