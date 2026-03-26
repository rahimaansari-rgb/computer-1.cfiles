#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int marks = get_int("enter marks: ");

    if (marks >= 90)
        printf("grade A");
    else if (marks >= 80)
        printf("grade B");
    else if (marks >= 70)
        printf("grade C");
    else if (marks >= 60)
        printf("grade D");
    else
        printf("fail");
}
