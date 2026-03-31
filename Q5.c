#include <stdio.h>

int main()
{

    int i;

    for (int i = 10; i >= 6; i--)
    {
        for (int j = 10; j > i; j--)
        {
            printf(" _");
        }

        for (int k = i; k >= 6; k--)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}