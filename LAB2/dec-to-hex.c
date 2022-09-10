#include <stdio.h>

int main()
{
    long int n, r[8], i, a = 0;
    printf("Enter Decimal: ");
    scanf("%ld", &n);
    for (i = 1; i < 8; i++)
    {
        r[i] = n % 16;
        n /= 16;
        a++;
        if (n == 0)
            break;
    }
    printf("Output: ");
    for (i = a; i >= 1; i--)
    {
        if (r[i] == 10)
            printf("A");
        else if (r[i] == 11)
            printf("B");
        else if (r[i] == 12)
            printf("C");
        else if (r[i] == 13)
            printf("D");
        else if (r[i] == 14)
            printf("E");
        else if (r[i] == 15)
            printf("F");
        else
            printf("%ld", r[i]);
    }
    return 0;
}