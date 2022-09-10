#include <stdio.h>

int main() {
    int Factor, Multiple;
    printf("Input Factor: ");
    scanf("%d", &Factor);
    printf("Input Multiple: ");
    scanf("%d", &Multiple);

    if(Multiple % Factor == 0) {
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}