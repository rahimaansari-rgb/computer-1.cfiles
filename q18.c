#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, n, fact = 1;

    n = get_int("enter number: ");

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("factorial = %d\n", fact);
}
