//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0, k = n; j < k + 1; j++)
        {
            if (i != j) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
        }
        if (count == 0) {
            printf("%d\n", arr[i]);
        }
    }
}