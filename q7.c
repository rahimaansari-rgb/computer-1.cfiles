#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("enter first number: ");
    int b = get_int("enter second number: ");

    if (a > b)
        printf("a is larger");
    else if (b > a)
        printf("b is larger");
    else
        printf("equal");
}
