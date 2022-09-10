//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main() {
    int input, decimal=0, temp, count =0, temp2=1;
    scanf("%d", &input);
    for(int i = input; i > 0; i/=10) {
        temp = i % 10; 
            if(count == 1) {
                temp2*=1;
            } else {
                temp2*=2;
            }
        decimal+=temp*temp2;
        count++;
    }
    printf("%d",decimal-1);
    return 0;
}