//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main() {
    printf("   SEPTEMBER 2022"   );
    printf("\n\n");
    printf(" S  M  T  W  T  F  S\n");
    for(int i = 0; i < 4; i++) {
        printf("   ");
    }
    for(int i = 1; i <= 30; i++ ) {
        printf("%2d ", i);
        if((i + 1 + 4 -1) % 7 == 0) {
            printf("\n");
        }
    }
}