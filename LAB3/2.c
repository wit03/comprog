#include <stdio.h>

int main() {
    float t, g = 10, u = 0;
    printf("Input time: ");
    scanf("%f", &t);
    printf("%.2f", (u+(u + g*t))/2*t);
    return 0;
}