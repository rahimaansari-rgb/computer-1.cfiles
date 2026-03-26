#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, n, count = 0;

    n = get_int("enter n: ");

    for(i = 1; i <= n; i++)
    {
        if(i % 3 == 0)
        {
            count++;
        }
    }

    printf("count = %d\n", count);
}
