//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main()
{
    int size, count, temp =0;
    scanf("%d", &size);
    int arr[100], freq[100];

    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    //sorting array
    for (int i = 0; i < size; i++) {     
        for (int j = i+1; j < size; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    } 


    for(int i=0; i<size; i++)
    {
        count = 1;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                /* Make sure not to count frequency of same element again */
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for(int i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }
    return 0;
}