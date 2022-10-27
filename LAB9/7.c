// 65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

void removeDuplicate(int *arr, int *size)
{
    for (int i = 0; i < *size; i++)
    {
        for (int j = i + 1; j < *size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < *size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
                j--;
            }
        }
    }
}

void sort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size; ++i)
    {

        for (int j = i + 1; j < size; ++j)
        {

            if (arr[i] > arr[j])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void intersection(int *arr1, int *arr2, int size1, int size2)
{
    int count = 0, noIntersec = 1;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count = 1;
            }
        }
        if (count == 1)
        {   
            noIntersec = 0;
            printf("%d\n", arr1[i]);
        }
        count = 0;
    }
}

int main()
{
    int size1, size2;
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    
    removeDuplicate(arr1, &size1);
    removeDuplicate(arr2, &size2);

    sort(arr1, size1);
    sort(arr2, size2);

    intersection(arr1, arr2, size1, size2);
}