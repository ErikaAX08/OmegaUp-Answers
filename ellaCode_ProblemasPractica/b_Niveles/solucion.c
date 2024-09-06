#include <stdio.h>
#define MAX_SCORE 100000 // 10⁵

int prod(int n)
{
    int p = 1;
    while (n > 0)
    {
        int digit = (n % 10);
        if (p != 0)
        {
            p *= digit;
        }
        n /= 10;
    }
    return p;
}

int expo(int n)
{
    int e = 0;
    while (n > 0)
    {
        int digit = n % 10;
        e += digit * digit;
        n /= 10;
    }
    return e;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int r[n][2];
    int memo[MAX_SCORE + 1];
    int suma_1[MAX_SCORE + 1];
    int suma_2[MAX_SCORE + 1];

    for (int i = 0; i <= MAX_SCORE; i++)
    {
        int pr = prod(i);
        int ex = expo(i);
        if (pr > ex)
            memo[i] = 1;
        else if (ex > pr)
            memo[i] = 2;
        else
            memo[i] = 0;
    }

    suma_1[0] = (memo[0] == 1) ? 1 : 0;
    suma_2[0] = (memo[0] == 2) ? 1 : 0;

    for (int i = 1; i <= MAX_SCORE; i++)
    {
        suma_1[i] = suma_1[i - 1] + (memo[i] == 1 ? 1 : 0);
        suma_2[i] = suma_2[i - 1] + (memo[i] == 2 ? 1 : 0);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &r[i][0], &r[i][1]);
    }

    for (int i = 0; i < n; i++)
    {
        int est1 = 0, est2 = 0;
        est1 = suma_1[r[i][1]] - (r[i][0] > 0 ? suma_1[r[i][0]-1] : 0);
        est2 = suma_2[r[i][1]] - (r[i][0] > 0 ? suma_2[r[i][0]-1] : 0);
        printf("%d %d\n", est1, est2);
    }
    return 0;
}