#include <stdio.h>
int main()
{
    int Number, flag = 0;
    printf("Input: ");
    scanf("%d", &Number);   
    for (int i = 2; i <= Number / 2; i++)
    { 
        if (Number % i == 0)
        {
            printf("Number is not prime");
            flag = 1;
            break ; 
        }
    }
    if (flag == 0)
        printf("Number is prime");  
    return 0;
}