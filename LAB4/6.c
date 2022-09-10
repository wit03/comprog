#include <stdio.h>

int main() {
    float sum = 0, count = 0, input = 1;
    while (input != 0) {
        scanf("%f", &input);
        sum+=input;
        if (input != 0)
            count++;
    }
    printf("%.2f", (sum/count));
    return 0;
}