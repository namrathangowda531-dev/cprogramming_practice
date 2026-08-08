#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nAddition = %d", a + b);
    printf("\nSubtraction = %d", a - b);
    printf("\nMultiplication = %d", a * b);

    if (b != 0) {
        printf("\nDivision = %d", a / b);
        printf("\nRemainder = %d", a % b);
    } else {
        printf("\nDivision and remainder are not possible with zero.");
    }

    return 0;
}
