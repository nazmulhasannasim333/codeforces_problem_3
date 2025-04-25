#include <stdio.h>

int main()
{
    int n;
    char a[1000001];
    scanf("%d", &n);
    scanf("%s", a);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] - '0';
    }
    printf("%d", sum);
    return 0;
}