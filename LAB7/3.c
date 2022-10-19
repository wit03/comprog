//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int celsius(int f) {
    return ((f-32) * 5/9);
}

int fahrenheit (int c) {
    return ((c * 9/5) + 32);
}

int main() {
    printf("Celsius to Fahrenheit Table\n");
    printf("   C   |   F   \n");
    for(int i = 0; i <= 100; i++) {
        printf("   %d   |   %d   \n",i, fahrenheit(i));
    }
    printf("\n\nFahrenheit to Celsius Table\n");
    printf("   F   |   C   \n");
    for(int i = 32; i <= 212; i++) {
        printf("   %d   |   %d   \n",i, celsius(i));
    }
    return 0;
}