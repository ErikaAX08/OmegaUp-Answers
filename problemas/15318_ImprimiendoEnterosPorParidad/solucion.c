#include <stdio.h>
#include <stdint.h>

int main()
{
    int n;
    int p;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &p);

    for (int i = 0; i < n; i++)
    {
        if (p == 0)
        {
            if ((a[i] % 2) == 0)
                printf("%d ", a[i]);
        }

        else
        {
            if ((a[i] % 2) != 0)
                printf("%d ", a[i]);
        }
    }

    return 0;
}