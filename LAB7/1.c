//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>
#include <math.h>

int main() {
    printf("a. %f\n", fabs(7.5));
    printf("b. %f\n", floor(7.5));
    printf("c. %f\n", fabs(0.0));
    printf("d. %f\n", ceil(0.0));
    printf("e. %f\n", fabs(-6.4));
    printf("f. %f\n", ceil(-6.4));
    printf("g. %f\n", ceil(-fabs(-8 + floor(-5.5))));
    return 0;
}