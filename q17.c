#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, n;

    n = get_int("enter number: ");

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}
