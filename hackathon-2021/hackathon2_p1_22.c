#include <stdio.h>
#include <stdlib.h>

// function to check is there any contiguous subarray that has sum 'k' avalaible or not
int function(int *ptr, int n, int k)
{
    int sum = 0, count = 0, temp = 0;
    for (int i = 0; i < n; i++){
        sum += ptr[i];
        if (sum > k)
        {
            count++;
            i = count;
            i--;
            sum = 0;
            continue;
        }
        if (sum == k)
        {
            temp = 1;
            break;
        }
    }
    if (temp == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int n, k;
    int *ptr;
    while((scanf("%d", &n))!=-1){
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    scanf("%d", &k);
    if (function(ptr, n, k) == 1)
    {
        printf("1\n");
    }
    else
        printf("0\n");
    }
    return 0;
}