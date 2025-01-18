#include <stdio.h>

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        if ((i % 3) == 0 && (i % 5) == 0)
        {
            printf("%s", "FizzBuzz");
        }
        else if ((i % 5) == 0)
        {
            printf("%s", "Buzz");
        }
        else if ((i % 3) == 0)
        {
            printf("%s", "Fizz");
        }
        else
        {
            printf("%d", i);
        }
        printf("%s", "\n");
    }

    return 0;
}