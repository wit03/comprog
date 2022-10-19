//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

void result(int *c0, int *c1, int *c2) {
    if(*c0 != 0) {
        for(int i = 0; i < *c0; i++) {
            printf("0\n");
        }
    }
    if(*c1 != 0) {
        for(int i = 0; i < *c1; i++) {
            printf("1\n");
        }
    }
    if(*c2 != 0) {
        for(int i = 0; i < *c2; i++) {
            printf("2\n");
        }
    }
}

int main() {
    int size, count0 = 0, count1 = 0, count2 = 0, temp = 0;
    scanf("%d", &size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &temp);
        if(temp == 0)
            count0++;
        else if(temp == 1)
            count1++;
        else if (temp == 2)
            count2++;
    }
    result(&count0, &count1, &count2);
}

