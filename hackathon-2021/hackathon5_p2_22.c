#include<stdio.h>
#include<stdlib.h>

void swap(int *arr,int n){
    int temp1,temp2;
    
    temp2 = arr[0];

    for (int i = 0; i < n-1; i++)
    {
        temp1 = arr[i+1];
        arr[i+1]=temp2;
        temp2 = temp1;

    }

    arr[0]=temp2;
}

//for matching two array
int matching(int *ptr1,int *ptr2,int n){

    for (int i = 0; i < n; i++)
    {   
        if (ptr1[i]!=ptr2[i])
        {
            return 0;
        }
    }
    return 1;
}


int main(){
    int n;
    scanf("%d",&n);
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }

    for (int i = 0; i < n-1; i++)
    {   
        int temp=0;
        int *ptr1 = matrix[i];
        int *ptr2 = matrix[i+1];

        swap(ptr1,n); //swap row and check with the next row that both are same or not
        temp = matching(ptr1 , ptr2 , n);

        if (temp==0)
        {
            printf("No");
            return 0;
        }
    }
    
    printf("Yes");
    

   return 0;
}