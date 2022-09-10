//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main() {
    int input, sum, count = 2;
    printf("Enter the number: ");
    scanf("%d", &input);
    printf("The factor of %d is ",input);
    while(input != 1) {
        while(input % count == 0 ) {
            printf("%d", count);
            input = input / count;
            if(input>count) {
                printf("*");
            }
        }
        count++;
    }
    return 0;
}