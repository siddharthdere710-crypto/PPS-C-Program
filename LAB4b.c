#include <stdio.h>

int main()
{
    int A[2][2], B[2][2], C[2][2];
    int i, j;

    printf("Enter measurement data for Machine Component 1:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter measurement data for Machine Component 2:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant Measurement Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
