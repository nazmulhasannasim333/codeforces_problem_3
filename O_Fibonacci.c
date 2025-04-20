#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long fib1 = 0, fib2 = 1, fibN;
    if (n == 1)
    {
        printf("%lld", fib1);
    }
    else if (n == 2)
    {
        printf("%lld", fib2);
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            fibN = fib1 + fib2;
            fib1 = fib2;
            fib2 = fibN;
        }
        printf("%lld\n", fibN);
    }

    return 0;
}