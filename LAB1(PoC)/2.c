#include <stdio.h>
#include <math.h>

int main() {
    int Number;
    printf("Input: ");
    scanf("%d", &Number);
    printf("%.1lf", pow(Number,0.5));
    return 0;
}