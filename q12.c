#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i, n;

    n = get_int("enter n: ");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}
