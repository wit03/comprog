//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main() {
    int size, prev, next, index;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size;i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i < size; i++) {
        prev = arr[i-1];
        next = arr[i+1];
        if(arr[i] > prev && arr[i] > next) {
            index = i;
            break;
        }
    }
    printf("%d", index);
}