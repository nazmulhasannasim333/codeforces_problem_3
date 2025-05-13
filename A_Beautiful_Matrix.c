#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[5][5];
    int x, y;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &m[i][j]);
            if (m[i][j] == 1)
            {
                x = i + 1;
                y = j + 1;
            }
        }
    }

    int moves = abs(x - 3) + abs(y - 3);

    printf("%d", moves);

    return 0;
}