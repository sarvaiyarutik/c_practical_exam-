#include <stdio.h>

int main()
{

    int first, last, number;

    printf("Enter element:");
    scanf("%d", &number);

    first = number / 100;

    last = number % 10;

    printf("Total sum of the result: %d", first + last);

    return 0;
}