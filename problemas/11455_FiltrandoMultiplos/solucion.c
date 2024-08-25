#include <stdio.h>
#include <stdint.h>

int main()
{
    int n;
    int k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        if ((a[i] % k) != 0)
        {
            printf("%c ", 'X');
        }
        else
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}