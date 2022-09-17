//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main() {
    int size, sSmallest = 1001, smallest = 1001, sindex = -1, ssindex = -1;
    //1001 is higher than the actual input range and -1 is not legit in array index
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    for(int i = 0; i < size; i++) {
        if(arr[i] < smallest) {
            sSmallest = smallest;
            smallest = arr[i];
            ssindex = sindex;
            sindex = i; 
        }
        else if (arr[i] < sSmallest) {
            sSmallest = arr[i];
            ssindex = i;
        }
    }

    printf("%d\n%d", sSmallest, ssindex);
    return 0;
}