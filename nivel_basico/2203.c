#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20

int main()
{
    int n;
    scanf("%d", &n);
    int suma = 0;
    while (n--)
    {
        int p = 0;
        scanf("%d", &p);
        while (p--)
        {
            char a[N];
            scanf("%s", a);

            if (strcmp(a, "oveja") != 0)
            {
                suma++;
            }
        }
    }

    printf("%d", suma);

    return 0;
}