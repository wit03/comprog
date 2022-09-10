//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main()
{
    int i, temp = 0, size;
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < size; ++i)
    {
        if (arr[temp] < arr[i])
            temp = i;
    }
    printf("%d\n", arr[temp]);
    printf("%d", temp);

    return 0;
}