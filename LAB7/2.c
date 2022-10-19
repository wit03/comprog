//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2) {
    return sqrt((side1*side1)+(side2*side2));
}

int main() {
    double a,b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("%lf", hypotenuse(a,b));
    return 0;
}