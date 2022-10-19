// 65070503408 Jarukit Jintanasathirakul

#include <stdio.h>

void move(int *arr, int size) {
    int resultArray[size];
    for(int i = 0; i < size; i++) {
        resultArray[i] = arr[i+1];
    }
    resultArray[size-1] = arr[0];
    for(int i = 0; i < size; i++) {
        printf("%d\n", resultArray[i]); 
    }
}

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    move(arr, size);
}