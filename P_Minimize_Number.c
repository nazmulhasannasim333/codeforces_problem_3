#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int operations = 0;

    while (1)
    {
        int all_even = 1;

        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 != 0)
            {
                all_even = 0;
                break;
            }
        }

        if (!all_even)
        {
            break;
        }

        for (int i = 0; i < N; i++)
        {
            A[i] /= 2;
        }

        operations++;
    }

    printf("%d", operations);
    return 0;
}