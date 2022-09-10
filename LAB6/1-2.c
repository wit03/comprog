//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main() {
    int input;
    int sum[100] = {1};
    scanf("%d", &input);
    for(int i = 1; i <= input; i++) {
        sum[i] = sum[i-1] * i;
    }
    printf("%d", sum[input]);
    return 0;
}