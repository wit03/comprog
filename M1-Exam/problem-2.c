//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>
#include <math.h>

int main() {
    int size;
    scanf("%d", &size);
    float numberOfPeople = size;
    int arr[size][3];
    int sumOfPerson[size];
    float scoreRange[size];
    for(int i = 0; i < size; i++) {
        sumOfPerson[i] = 0;
        scoreRange[i] = 0.0;
    }


    for(int i = 0; i<size;i++) {
       scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);   
    }
    for(int i = 0; i<size;i++) {
        for(int j = 0; j < 3; j++) {
            sumOfPerson[i] += arr[i][j];
            
        }
    }

    for(int i = 0; i < size; i++) {
        if(sumOfPerson[i] >= 80) {
            scoreRange[0] += 1.0;
        }
        if(sumOfPerson[i] >= 70) {
            scoreRange[1] += 1.0;
        }
        if(sumOfPerson[i] >= 60) {
            scoreRange[2] += 1.0;
        }
        if(sumOfPerson[i] >= 50) {
            scoreRange[3] += 1.0;
        }
        scoreRange[4]++;
    }

    //print result
    for (int i = 0; i <= 4; i++) {
        float percent = scoreRange[i]*100.0/size;
        printf("%.0f %.2f\n", scoreRange[i], percent);
    }
    
    return 0;
}