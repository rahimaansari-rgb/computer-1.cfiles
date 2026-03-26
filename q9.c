#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("enter age: ");
    int student = get_int("enter student (1/0): ");

    if (age < 12)
        printf("ticket price = 50");

    else if (age <= 60)
    {
        if (student == 1)
            printf("ticket price = 80");
        else
            printf("ticket price = 100");
    }

    else
        printf("ticket price = 60");
}
