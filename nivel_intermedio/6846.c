#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;

    if (n < 3)
    {
        printf("%d\n", 0);
        return 0;
    }

    for (size_t i = 4; i <= n; i++)
    {
        if (!(i % 3))
            sum++;
    }

    printf("%d\n", sum);

    return 0;
}