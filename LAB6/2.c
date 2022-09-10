//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main()
{
    int input;
    int temp[3] = {1};
    scanf("%d", &input);
    for (int i = 2; i < input+2; ++i)
    {
        temp[2] = temp[0] + temp[1];
        printf("%d ", temp[2]);
        temp[0] = temp[1];
        temp[1] = temp[2];
    }
    return 0;
}