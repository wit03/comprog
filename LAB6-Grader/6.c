//65070503408 Jarukit Jintanasathirakul
#include <stdio.h> 
#include <stdlib.h>

int main() {
    int size, prevDiff = 2001, diff, firstPair, secPair; //2000 is the highest sum possible, so 2001 is impossible
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(i != j) {
                diff = abs(arr[i] + arr[j]); //if i = j then it's always 0
                if(diff < prevDiff) {
                    firstPair = arr[i];
                    secPair = arr[j];
                    prevDiff = diff;
                }
            } else {
                continue;
            }
        }
    }
    printf("%d\n%d", firstPair, secPair);
    return 0;
}