#include <stdio.h>

void check(int digit)
{

    if (digit % 15 == 0)
    {
        printf("This given number divisible by 3 and 5.\n");
    }
    else
    {
        printf("This given number not divisible by 3 and 5.\n");
    }
}

int main()
{

    int number;

    printf("Enter array element :");
    scanf("%d", &number);

    check(number);

    return 0;
}