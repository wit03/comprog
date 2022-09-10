#include <stdio.h>

int main() {
    int a,b,c;
    printf("Input: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a + b > c) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}