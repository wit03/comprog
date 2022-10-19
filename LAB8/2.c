// 65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int hailstone(int number)
{
    printf("%d\n", number);
    if(number == 1) {
        return number;
    }
    else if (number % 2 == 0) {
        hailstone(number/2);
    }
    else {
        hailstone(3 * number + 1);
    }
        
}

int main()
{
    int input;
    scanf("%d", &input);
    hailstone(input);
}