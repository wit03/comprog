//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int strLength(char *arr) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char input[1001];
    scanf("%s", input);
    printf("%d", strLength(input));
    return 0;
}