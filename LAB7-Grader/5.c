//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>  

int anagram(int N[], int N1[], int J, int J1)
{
    int count = 0;
    for(int i=0; i<J; i++) {
        for(int j=0; j<J1; j++) {
            if(N[i] == N1[j])
            {
                count++;
                break;
            }
        }
    }
    if((count==J)&&(count==J1))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

int main()
{
    int i, j, j1;

    scanf("%d",&j);
    int n[j];

    for(i=0; i<j; i++)
    {
        scanf("%d",&n[i]);
    }

    scanf("%d",&j1);
    int n1[j1];

    for(i=0; i<j1; i++)
    {
        scanf("%d",&n1[i]);
    }

    anagram(n, n1, j, j1);

    return 0;
}