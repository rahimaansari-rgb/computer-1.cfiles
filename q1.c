#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("enter first integer: ");
    int b = get_int("enter second integer: ");

    printf("sum: %d\ndifference: %d\nproduct: %d\n", a + b, a - b, a * b);
    printf("quotient: %d\nremainder: %d\n", a / b, a % b);
}
