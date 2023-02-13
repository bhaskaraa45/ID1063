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

//to sorting a array in increasing order
void sorting(int *arr,int n,int *a){
    for (int j = 0; j < n; j++)
    {
        for (int k = j+1; k < n; k++)
        {
            if (arr[j]>arr[k])
            {
                int temp = arr[j];
                arr[j]=arr[k];
                arr[k]=temp;

                int temp2 = a[j];
                a[j] = a[k];
                a[k] = temp2;
            }
        
        }
    }
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
        int *newArr = (int *)malloc(sizeof(int) * size); //to row number
        for (int i = 0; i < size; i++)
        {
            array[i]= no_of_zero(matrix[i],size);
            newArr[i] = i;
        }

        sorting(array,size,newArr);
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
        {
            int i=0,j=0;
            while(j<size){
               
                for(int k=0 ; k<size ;k++){
                    printf("%d ",matrix[newArr[i]][k]);
                }
                printf("\n");

                j++;
                i++;
            }
        }
        else 
        printf("Not upper triangular\n");

        free(array);
        free(newArr);
        
    }

    return 0;
}

