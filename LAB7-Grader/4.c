//65070503408 Jarukit Jintanasathirakul
#include<stdio.h>

int binary(int num)
{
    int a[1000], i;
    if (num == 0)
    {
        printf("0");
    }
    else
    {
        for (i = 0; num > 0; i++)
        {
            a[i] = num % 2;
            num = num / 2;
        }
        for (i = i - 1; i >= 0; i--)
        {
            printf("%d", a[i]);
        }
    }
    return 0;
}
int main()
{
    int num;
    scanf("%d", &num);

    binary(num);
    return 0;
}   