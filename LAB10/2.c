//65070503408 Jarukit jintanasathirakul
#include <stdio.h>
#include <string.h>

struct list {
    char name[100];
    int income;
};

int main() {
    int length, workLength, workCount;
    scanf("%d", &length);
    struct list lists[length];
    int tempIncome;
    char worktime[100];

    for(int i = 0; i < length; i++) {
        workCount=0;
        //take input name
        scanf("%s", lists[i].name);
        //take income /day
        scanf("%d", &tempIncome);
        //take worktime
        scanf("%s", &worktime);
        //find worktime string length
        workLength = strlen(worktime);
        //count worktime
        for(int j = 0; j < workLength; j++) {
            if(worktime[j] == 'Y')
                workCount++;
        }
        //calculate income
        lists[i].income = tempIncome * workCount/workLength;
    }

    for(int i = 0; i < length; i++) {
        printf("%s ", lists[i].name);
        printf("%d\n", lists[i].income);
    }
}