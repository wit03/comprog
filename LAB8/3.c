// 65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int powerof2(int x) {
    if (x == 1) {
        printf("True\n");
        return x;
    }
    else if(x%2 != 0 || x==0) {
        printf("False\n");
        return x;
    } else {
        powerof2(x/2);
    }
}

int powerof3(int x) {
    if (x == 1) {
        printf("True\n");
        return x;
    }
    else if(x%3 != 0 || x==0) {
        printf("False\n");
        return x;
    } else {
        powerof3(x/3);
    }
}

int powerof4(int x) {
    if (x == 1) {
        printf("True\n");
        return x;
    }
    else if(x%4 != 0 || x==0) {
        printf("False\n");
        return x;
    } else {
        powerof4(x/4);
    }
}

int main() {
    int input;
    scanf("%d", &input);
    powerof2(input);
    powerof3(input);
    powerof4(input);
}