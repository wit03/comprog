//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main() {
    int input, divSum = 0;
    scanf("%d", &input);
    for(int i = 1; i < input; i++) {
        if(input % i == 0) {
            divSum += i;
        }
    }
    if(divSum == input) {
        printf("%d is a perfect number.", input);
    } else {
        printf("%d is not a perfect number.", input);
    }

    return 0;
}