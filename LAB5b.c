#include <stdio.h>
#include <string.h>

int main()
{
    char model1[50], model2[50];

    printf("Enter first machine model: ");
    scanf("%s", model1);
    printf("Enter second machine model: ");
    scanf("%s", model2);

    if (strcmp(model1, model2) == 0)
        printf("Both machine models are the same.\n");
    else
        printf("Machine models are different.\n");

    return 0;
}
