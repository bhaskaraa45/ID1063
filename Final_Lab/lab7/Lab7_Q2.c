#include<stdio.h>
void vectorProduct(int a1[],int a2[],int a[]);
int scalarProduct(int b1[],int b2[],int size);


int main(){
int vect1[3],vect2[3],vp[3],sp;
char ch='x';

//input
for(int i=0;i<3;i++){
    printf("Enter %c component of vector 1 : ",(ch+i));
    scanf("%d",&vect1[i]);    
}
for(int i=0;i<3;i++){
    printf("Enter %c component of vector 2 : ",(ch+i));
    scanf("%d",&vect2[i]);    
}

printf("\nVector 1 : (%d)i + (%d)j + (%d)k\n",vect1[0],vect1[1],vect1[2]);
printf("Vector 2 : (%d)i + (%d)j + (%d)k\n",vect2[0],vect2[1],vect2[2]);

//function call
vectorProduct(vect1,vect2,vp);
sp = scalarProduct(vect1,vect2,3);

//output
printf("\nScalar Product : %d\n",sp);
printf("Vector Product : (%d)i + (%d)j + (%d)k\n",vp[0],vp[1],vp[2]);

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