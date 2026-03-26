#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("enter number: ");

    if (n > 0)
        printf("positive");
    else if (n < 0)
        printf("negative");
    else
        printf("zero");
}
