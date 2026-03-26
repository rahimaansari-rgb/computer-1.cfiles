#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int year = get_int("enter year: ");

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("leap Year");
    else
        printf("not leap year");
}
