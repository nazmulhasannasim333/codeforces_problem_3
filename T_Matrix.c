#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r;
    scanf("%d", &r);
    int a[r][r];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int primary_sum = 0;
    int secondary_sum = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == j)
            {
                primary_sum += a[i][j];
            }

            if (i + j == r - 1)
            {
                secondary_sum += a[i][j];
            }
        }
    }

    int difference = primary_sum - secondary_sum;
    if (difference < 0)
    {
        difference = -difference;
    }
    printf("%d\n", difference);

    return 0;
}