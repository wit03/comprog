//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main()
{
    int input, i, j, isPairPrime = 0;
    scanf("%d", &input);
    for (i = 2; i <= input / 2; i++) { //find possible pair (i, input-i)
        for (j = 2; j <= i / 2; j++) { //check if the first number is prime
            if (i % j == 0) {
                isPairPrime++;
                break;
            }
        }
        if (!isPairPrime) {
            for (j = 2; j <= (input - i) / 2; j++) { //check if the second number is prime
                if ((input - i) % j == 0) {
                    isPairPrime++;
                    break;
                }
            }
            if (!isPairPrime)
                printf("%d = %d + %d\n", input, i, input - i);
        }
        isPairPrime = 0;
    }
    return 0;
}