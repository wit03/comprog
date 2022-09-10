#include <stdio.h>

int main()
{
    char input;
    printf("Input lowercase: ");
    scanf("%c", &input);
    printf("%c", input-32);    
    return 0;
}