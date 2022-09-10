#include <stdio.h>

int main() {
    printf("+---+---+---------+--------+---------+-------------+---------+\n");
    printf("| p | q | p AND q | p OR q | p XOR q | IF p THEN q | A IFF B |\n");
    printf("+---+---+---------+--------+---------+-------------+---------+\n");
    for(int p = 0; p <= 1; p++) {
        for(int q = 0; q <= 1; q++) {
            printf("| %d ", p);
            printf("| %d ", q);
            printf("|    %d    ", p&q);
            printf("|    %d   ", p|q);
            printf("|    %d    ", p^q);
            printf("|      %d      ", !p||q);
            printf("|    %d    |", p==q);
            printf("\n");
        }
    }
    printf("+---+---+---------+--------+---------+-------------+---------+\n");
    return 0;
}
