#include <stdio.h>

int main() {
    int integer, temp;
    printf("Enter Decimal: ");
    scanf("%d", &integer);   
    printf("Output: ");
    for(int i = 15; i >= 0; i--) {
        temp = integer >>  i;
        if(temp & 1) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    return 0;
}
