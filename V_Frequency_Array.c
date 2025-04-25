#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int freq[100001] = {0};
    for (int i = 0; i < N; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", freq[i]);
    }
    return 0;
}