//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main()
{
    int input, temp = 1;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        for (int k = 1; k <= input - i; k++)
            printf("  ");
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                temp = 1;
            else
                temp = temp * (i - j + 1) / j;
            printf("%4d", temp);
        }
        printf("\n");
    }
    return 0;
}