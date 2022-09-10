#include <stdio.h>

int main() {
    int Number;
    printf("Input: ");
    scanf("%d", &Number);
    for(int i = 1; i <= Number; i++) {
        if(Number % i == 0) {
            printf("%d \n", i);
        }
    }
    return 0;
}
