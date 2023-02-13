#include<stdio.h>

int main(){
int n,m,q;
printf("Enter n , m , q (in order) : ");
scanf("%d%d%d",&n,&m,&q);

int arr1[n][m],arr2[m][q],arr[n][q],x=0 ,i,j,k=0;

printf("Enter 1st matrix (A) of %dx%d\n",n,m);
for (int a = 0; a < n ; a++)
{
    printf("enter row-%d : ",a+1);
    for (int b = 0; b < m; b++)
     {   
        scanf("%d",&arr1[a][b]);
    }
    
}

printf("Enter 2nd matrix (B) of %dx%d\n",m,q);
for (int a = 0; a < m ; a++)
{
    printf("enter row-%d : ",a+1);
    for (int b = 0; b < q; b++)
    {   
        scanf("%d",&arr2[a][b]);
    }
    
}

printf("\nProduct : \n");
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < q; j++)
    {
        for (int k = 0; k < m; k++)
        {
            x+=arr1[i][k]*arr2[k][j];
        }
        printf("%d\t",x);
        
        x=0;
    }
    printf("\n");
}
    return 0;
}