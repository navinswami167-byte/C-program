#include <stdio.h>

int main()
{
    float x1, x2, x3, x4, x5, average;

    printf("Enter your first score: ");
    scanf("%f", &x1);

    printf("Enter your second score: ");
    scanf("%f", &x2);

    printf("Enter your third score: ");
    scanf("%f", &x3);

    printf("Enter your fourth score: ");
    scanf("%f", &x4);

    printf("Enter your fifth score: ");
    scanf("%f", &x5);

    average = (x1 + x2 + x3 + x4 + x5) / 5.0;

    printf("Your Average score: ");
    printf("%f", average);

    return 0;
}

