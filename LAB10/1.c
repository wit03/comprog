//65070503408 Jarukit jintanasathirakul
#include <stdio.h>

struct list {
    char name[100];
    int totalScore;
    char GPA;
};

char grading(int score) {
    if(score >= 80) return 'A';
    else if(score < 80 && score >= 70) return 'B';
    else if(score < 70 && score >= 60) return 'C';
    else if(score < 60 && score >= 50) return 'D';
    else return 'F';
}

int main() {
    int length, tempScore;
    scanf("%d", &length);
    struct list lists[length];
    int scoreOrder[length];
    for(int i = 0; i < length; i++) {
        //cleanup lists[i].totalScore
        lists[i].totalScore = 0;
        //take score input
        for(int j = 0; j < 3; j++) {
            scanf("%d", &tempScore);
            lists[i].totalScore += tempScore;
        }
        //assign scoreOrder
        scoreOrder[i] = lists[i].totalScore;
        //take name input
        scanf("%s", lists[i].name);
        //take grade input
        lists[i].GPA = grading(lists[i].totalScore);
    }

    //sort scoreOrder
    int temp2;
    for(int i=0;i<length;i++){
        for(int j=0;j<=i;j++){
            if(scoreOrder[i]>scoreOrder[j]){
                temp2=scoreOrder[i];
                scoreOrder[i]=scoreOrder[j];
                scoreOrder[j]=temp2;
            }
        }
    }

    //sort and print
    for(int i = 0; i < length; i++) {
        // int highest = -1, highestIndex;
        for(int j = 0; j < length; j++) {
            // if(lists[j].totalScore > highest) {
            //     highest = lists[j].totalScore;
            //     highestIndex = j;
            // }
            if(lists[j].totalScore == scoreOrder[i]) {
                printf("%s ", lists[j].name);
                printf("%d ", lists[j].totalScore);
                printf("%c ", lists[j].GPA);
                printf("\n");
                lists[j].totalScore = 11111;
                break;
            }
        }
    }

    return 0;
}