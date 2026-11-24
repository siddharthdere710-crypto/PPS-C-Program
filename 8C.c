#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int length = 40, width = 20;
    int area;

    printf("Before: L = %d, W = %d\n", length, width);
    area = length * width;
    printf("Area = %d sq.cm\n", area);

    swap(&length, &width);

    printf("After: L = %d, W = %d\n", length, width);
    area = length * width;
    printf("Area = %d sq.cm\n", area);

    return 0;
}
