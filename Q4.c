

#include <stdio.h>

int main()
{

    int number, i;

    int sum1[100], sum2[100], sum3[100];

    int *array1, *array2, *array3;

    printf("Enter row element:");
    scanf("%d", &number);

   

    printf("Enter elements of first array:\n");
    for (i = 0; i < number; i++) {
        scanf("%d", &sum1[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < number; i++) {
        scanf("%d", &sum2[i]);
    }


    array1 = sum1;

    array2 = sum2;

    array3 = sum3;

    for (int i = 0; i < number; i++)
    {
        *(array3 + i) = *(array1 + i) + *(array2 + i);
    }

    printf("Sum of two arrays:\n");

    for (int i = 0; i < number; i++)
    {
        printf("%d\n", sum3[i]);
    }

    return 0;
}

