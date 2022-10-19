//65070503408 Jarukit Jintanasathirakul
#include<stdio.h>
int check(int num)
{
    int i, sum;
    sum = 0;
    for(i=1; i<num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    return sum == num ? 1 : 0;
}

void prefect(int min, int max)
{
    int none = 0;
    while(min <= max || min == max)
    {
        if(min != 0){
            if(check(min)) {
                printf("%d\n", min);
                none++;
            }
        }
        min++;
    }
    if(none==0){
        printf("None");
    }
}
int main()
{
    int min, max;
    scanf("%d %d", &min, &max); 
    prefect(min, max);
    return 0;
}