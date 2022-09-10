#include <stdio.h>

int main() {
    int input, flag = 0;
    printf("Input: ");
    scanf("%d", &input);
    for(int i = 2; i < input;i++) {
        if(input % i == 0) {
            flag = 1;
            break;
        }
    }
    printf( flag == 0 ? "%d is a prime number." : "%d is not a prime number.", input);
    return 0;
}
