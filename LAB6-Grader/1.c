//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

/*
input: 1234
output: 4321
*/
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
   for(int i = size-1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    } 
    return 0;
}