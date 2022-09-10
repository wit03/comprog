#include <stdio.h>

int main() {
    int input, divider;
    printf("Input Number: ");
    scanf("%d", &input);
    printf("Input Divider: ");
    scanf("%d", &divider);
    printf("Quotient: %d", input/divider);
    printf("\nRemainder: %d", input%divider);
    return 0;
}