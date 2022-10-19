// 65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

void printArr(int *a, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d\n", a[i]);
    }
}

int main() {
    int orgSize, tempSize;
    scanf("%d", &orgSize);
    tempSize = orgSize;
    int arr[orgSize * 2];
    for(int i = 0; i < tempSize; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            arr[i+1] = 0;
            i++;
            tempSize++;
        }
    }

    printArr(arr, orgSize);
    return 0;
}