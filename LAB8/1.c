//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>
int product = 1;
int lcm(int x, int y) {  
    if(product%x == 0 && product%y == 0) {
        return product;
    }
    else {
        product++;
        lcm(x,y);
        return product;
    }
}

int main() {
    int input1, input2, result;
    scanf("%d", &input1);
    scanf("%d", &input2);
    if(input1 <= 0 || input2 <= 0) {
        printf("ERROR");
    } else {
        printf("%d", lcm(input1, input2));
    }
    return 0;
}