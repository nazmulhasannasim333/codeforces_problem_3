#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[j]);
        }
        int min_result = A[0] + A[1] + (1 - 0);
        for (int j = 0; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int result = A[j] + A[k] + (k - j);
                if (result < min_result)
                {
                    min_result = result;
                }
            }
        }
        printf("%d\n", min_result);
    }
    return 0;
}