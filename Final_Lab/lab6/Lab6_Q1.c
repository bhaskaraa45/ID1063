#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXSIZE 20

int main()
{
    int a[MAXSIZE],size=MAXSIZE;
    int i;

    bzero(a,sizeof(a));
    while(scanf("%d",&size)!=-1){
        for(i=0;i<size;i++) {
            scanf("%d",&a[i]);
        }


        for (int j = 0; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if (a[j]>a[k])
                {
                    int temp = a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
        
            }
    
        }

        for (int l = 0; l < size; l++) 
        {
            printf("%d ",a[l]);
        }

        size<=0? printf("no numbers\n") : printf("\n");

        
}
    return 0;
}
