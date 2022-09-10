#include <stdio.h>

int main() {
    int Input1, Input2, GCD = 0;
    printf("Input 1: ");
    scanf("%d", &Input1);
    printf("Input 2: ");
    scanf("%d", &Input2);
    for(int i = 1; i<=Input1 && i <= Input2; ++i) {
        if(Input1 % i == 0 && Input2 % i == 0) {
            GCD = i;
        }
    }
    printf("%d", GCD);
    return 0;
}