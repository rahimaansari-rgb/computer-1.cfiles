#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float c = get_float("enter celsius: ");
    float f = (c * 9/5) + 32;

    printf("fahrenheit: %.2f\n", f);
}
