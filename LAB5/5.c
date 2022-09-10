//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main()
{
    int n1 = 1, n2 = 1, n3, i, input;
    scanf("%d", &input);
    printf("\n%d %d", n1, n2);
    for (i = 2; i < input; ++i)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}