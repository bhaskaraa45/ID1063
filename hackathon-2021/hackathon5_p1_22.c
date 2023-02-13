#include<stdio.h>
#include<stdlib.h>

//function to scan a vector 
void scanVect(int *vect , int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&vect[i]);
    }
}

//for printing the required ans
void multiplication(int *v1,int *v2,int m,int n){
    int multi =1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            multi = v1[i]*v2[j];
            printf("%d ",multi);
        }
        printf("\n");
    }
    

}

int main(){
    int m , n;
    scanf("%d%d",&m,&n);

    int *vect1 , *vect2;
    vect1 = (int *)malloc(m*sizeof(int));
    vect2 = (int *)malloc(n*sizeof(int));

    scanVect(vect1,m);
    scanVect(vect2,n);

    multiplication(vect1,vect2,m,n);

free(vect1);
free(vect2);

    return 0;
}