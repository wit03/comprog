// 65070503408 Jarukit Jintanasathirakul
#include <stdio.h>
#include <math.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size], tempArr[size];
    int mode, mode1, mode2, count = 0;
    float sum = 0, mean = 0, sd = 0, temp = 0;
    //cleanup aray
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
        tempArr[i] = 1;
    }

    //taking input and find sum
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    //calculate and print Mean
    mean = sum / size;
    printf("%.2f\n", mean);

    //calculate and print  Mode
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (tempArr[i] != 0)
            {
                if (arr[i] == arr[j])
                {
                    tempArr[i]++;
                    tempArr[j] = 0;
                }
            }
        }
    }
    mode1 = arr[0];
    mode = tempArr[0];
    for (int i = 0; i < size; i++)
    {
        if (tempArr[i] > mode)
        {
            mode = tempArr[i];
            mode1 = arr[i];
        }
    }
    count = 1;
    for (int i = 0; i < size; i++)
    {
        if (tempArr[i] == mode && arr[i] != mode1)
        {
            mode2 = arr[i];
            count++;
        }
    }
    if (count == 1)
    {
        printf("%d", mode1);
    }
    else if (count == 2)
    {
        printf("%d %d", mode1, mode2);
    }
    else
    {
        printf("NONE");
    }

    // calculate and print SD
    for (int i = 0; i < size; i++)
    {
        temp += (arr[i] - mean) * (arr[i] - mean);
    }
    sd = sqrt(temp / size);
    printf("\n%.2f", sd);
}