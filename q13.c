#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i, n;

    n = get_int("enter n: ");

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}
