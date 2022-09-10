#include <stdio.h>

int main() {
    int Number1, Number2, GCD;
    printf("Input Number 1: ");
    scanf("%d", &Number1);
    printf("Input Number 2: ");
    scanf("%d", &Number2);
  
    for(int i = 1; i <= Number1 && i <= Number2; i++) {
        if(Number1 % i == 0 && Number2 % i == 0) {
            GCD = i;
        }
    }
    printf("%d", GCD);
    return 0;
}