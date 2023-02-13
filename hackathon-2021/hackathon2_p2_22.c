#include <stdio.h>
#include <stdlib.h>

// function for determine a,r,d and store it in a new array
void function(int *ptr, int *newPtr)
{
    int a, r, d;
    /*
    ptr[0]= a
    ptr[1]= ar+d
    ptr[2]= ar^2+d
    ptr[3]= ar^3+d
    */
    int x = ptr[2] - ptr[1]; // x = ar(r-1)
    int y = ptr[3] - ptr[2]; // y = ar^2(r-1)
    int z = y / x;           // z= r

    r = z;
    a = ptr[0];
    d = ptr[1] - ptr[0] * r; // ar+d=ptr[1]

    newPtr[0] = a;
    newPtr[1] = r;
    newPtr[2] = d;
}

int main()
{
    int *ptr, *newPtr;
    ptr = (int *)malloc(4 * sizeof(int));
    newPtr = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &ptr[i]);
    }

    function(ptr, newPtr);
    printf("%d %d %d", newPtr[0], newPtr[1], newPtr[2]);

    return 0;
}