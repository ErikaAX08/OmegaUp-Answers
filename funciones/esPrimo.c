#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int num)
{
    if (num == 1)
        return false;
    if (num == 2)
        return true;
    if ((num % 2) == 0)
        return false;
    for (int i = 3; i < num; i++)
        if ((num % i) == 0)
            return false;
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (esPrimo(n))
        printf("ES PRIMO");
    else
        printf("NO ES PRIMO");
        
    return 0;
}