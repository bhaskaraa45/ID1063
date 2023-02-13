#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 20


//how many zeros are there in a row of matrix
int no_of_zero(int *arr,int n){

    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
            count++;
        else
            return count;
    }
    return count;
}




int main()
{
    int i,j,size,matrix[MAX_SIZE][MAX_SIZE];
   
    while(scanf("%d",&size)!=-1) {
        for (i=0;i<size;i++) {
            for (j=0;j<size;j++) {
                scanf("%d",&matrix[i][j]);
            }

        }
          int *array = (int *)malloc(sizeof(int) * size); //to store no of zeros presents in every row of matrix

        for (int i = 0; i < size; i++)
        {
            array[i]= no_of_zero(matrix[i],size);
        }

        int check = 0;
        
        for (int i = 0; i < size; i++)
        {
            if (array[i]>=i)
            {
                check=1;
            }else{
                check = 0;
                break;
            }
        }


        if (check==1)
        printf("upper triangular\n");
        else 
        printf("Not upper triangular\n");

        free(array);
        

    }
    
    return 0;
}

