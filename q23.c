#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n, count = 0;

    n = get_int("enter number: ");

    while(n>0)
    {
        n = n/10;
        count++;
    }

    printf("digits = %d\n",count);
}
