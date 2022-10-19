//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int strLength(char *arr) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }

    return count;
}

void reverse(char *arr) {
    for(int i = (strLength(arr)-1); i >= 0; i--) {
        printf("%c", arr[i]);
    }
}

int main() {
    char input[1001]; 
    int *result;
    scanf("%s", input);
    reverse(input);
    return 0;
}