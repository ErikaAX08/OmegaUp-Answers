#include <stdio.h>

#define N 1000000

int main()
{
    int n = 0;
    scanf("%d", &n);
    int b[N + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        int bt = 0;
        scanf("%d", &bt);
        b[bt]++;
    }

    int sum = 0;
    for (size_t i = 0; i < N; i++)
    {
        sum += b[i] % 2;
    }

    printf("%d", sum);

    return 0;
}