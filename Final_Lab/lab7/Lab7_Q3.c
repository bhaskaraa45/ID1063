#include<stdio.h>
void vectorProduct(int a1[],int a2[],int a[]);
int scalarProduct(int b1[],int b2[],int size);


int main(){
    int n,m,q;
printf("Enter n , m , q (in order) : ");
scanf("%d%d%d",&n,&m,&q);

int arr1[n][m],arr2[q][m];

printf("Enter 1st matrix (A) of %dx%d\n",n,m);
for (int a = 0; a < n ; a++)
{
    printf("enter row-%d : ",a+1);
    for (int b = 0; b < m; b++)
    {
         scanf("%d",&arr1[a][b]);
    }
    
}

//2nd matrix input as qxm not mxq cz it will we have to multiply Row & Col.
printf("Enter 2nd matrix (B) of %dx%d\n",m,q);
for (int a = 0; a < m ; a++)
{
    printf("enter row-%d : ",a+1);
    for (int b = 0; b < q; b++)
    {   
        scanf("%d",&arr2[b][a]);
    }
    
}

//output
printf("\nProduct : \n");
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {    
    int x = scalarProduct(arr1[i],arr2[j],m);
    printf("%d\t",x); 
    }
    printf("\n");
}

    return 0;
}

void vectorProduct(int a1[3],int a2[3],int a[3]){
    a[0] = a1[1]*a2[2]-a1[2]*a2[1];
    a[1] = (-1)*(a1[0]*a2[2]-a1[2]*a2[0]);
    a[2] = a1[0]*a2[1]-a1[1]*a2[0];
    
    
}

int scalarProduct(int b1[],int b2[],int size){
    int b=0;
    for (int i = 0; i < size; i++)
    {
        b+= b1[i]*b2[i];
    }
    return b;
}