#include <stdio.h>

int main() {
    char input;
    printf("Input: ");
    scanf("%c", &input);
    if(input >= 0) { //ascii code cant be negative
        if(input<=47 || (input>=58 && input<=64) || (input >= 91 && input <= 96) || (input>= 123 && input <= 127))
            printf("Special character");
        else if(input <= 57)
            printf("Digit");
        else 
            printf("Alphabet");
    }
    return 0;
}

