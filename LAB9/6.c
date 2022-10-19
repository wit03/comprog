//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int strLength(char *arr) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}

//string reverse algo
// void rev(char *arr, int l, int r) {
//     int temp;
//     while(l<r) {
//         temp = arr[l];
//         arr[l] = arr[r];
//         arr[r] = temp;
//         l++;
//         r--;
//     }
// }

void reverse(char *arr) {
    int right = strLength(arr) - 1;
    int left = 0;
    while (left < right)
    {
        if(!((arr[left] >= 'A' && arr[left] <= 'Z') || (arr[left] >= 'a' && arr[left] <= 'z'))) {
            left++;
        }
        else if(!((arr[right] >= 'A' && arr[right] <= 'Z') || (arr[right] >= 'a' && arr[right] <= 'z')))
           right--;
        else {
            char temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    
    for(int i = 0; i < strLength(arr); i++) {
        printf("%c", arr[i]);
    }
}

int main() {
    char input[1001]; 
    scanf("%s", input);
    reverse(input);
    return 0;
}
