#include <stdio.h>
int main()
{
    int a, b, min;
    scanf("%d%d", &a, &b);
    min = a > b ? b : a;
    
    if (a == 0)
    {
        a = 0;
    }
    else if (a % b == 0 || b % a == 0)
    {
        if (a < b)
        {
            b /= a;
            a = 1;
        }
        else
        {
            a /= b;
            b = 1;
        }
    }

    else
    {
        for (int i = 2; i <= min / 2; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                a /= i;
                b /= i;
                i = 1;
            }
        }
    }
    printf("a/b = %d/%d", a, b);

    return 0;
}