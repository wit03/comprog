//65070503408 Jarukit jintanasathirakul
#include <stdio.h>

int strLength(char *arr) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int jump(char *arr, int current, int min, int max) {
    for(int i=current+min,j=current+max;i<=j;i++)
    {
        if(arr[i]=='0'){
            return i;
        }
        else if(i==j){
            return 0;
        }
    }
}
int main() {
    char string[1001];
    int min,max;
    scanf("%s",string);
    scanf("%d",&min);
    scanf("%d",&max);
    int current = 0;
    while(current<=strLength(string)-1){
        current=jump(string,current,min,max);
        if(current == 0){
            printf("False");
            break;
        }
        else if(current == strLength(string)-1){
            printf("True");
            break;
        }
    }
    return 0;
}