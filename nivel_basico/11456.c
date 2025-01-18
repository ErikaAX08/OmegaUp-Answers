#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int v[2][n];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &v[i][j]);
        }
    }

    int res = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[0][i] <= v[1][i])
        {
            res = 0;
            break;
        }
    }

    printf("%d", res);

    return 0;
}