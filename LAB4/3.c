#include <stdio.h>
int main() {
    int input, count, lineCount = 0;
    printf("Input: ");
    scanf("%d", &input);
    printf("Prime Numbers are: \n");
    for (int i = 1; i <= input; i++) 
    {
        count = 0; 
        for (int j = 1; j <= input; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2){
            printf("%d ", i);
            lineCount++;
            if (lineCount % 10 == 0) {
                printf("\n");
                lineCount=0;
            }
        }
            
    }
    return 0;
}