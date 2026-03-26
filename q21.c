#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, n, sum = 0;

    n = get_int("enter n: ");

    for(i=1;i<=n;i++)
    {
        sum = sum + (2*i);
    }

    printf("sum = %d\n",sum);
}
