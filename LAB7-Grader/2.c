//65070503408 Jarukit Jintanasathirakul
#include<stdio.h>
int minmax(int num[1000],int temp)
{
    int max, min;
    max = num[0];
    min = num[0];
    for (int i = 1; i < temp; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        else if (num[i] < min)
        {
            min = num[i];
        }
    }
    printf("%d\n", max);
    printf("%d", min);
    return 0;
}
int main()
{
    int count, num[1000];
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &num[i]);
    }
    minmax(num,count);
}