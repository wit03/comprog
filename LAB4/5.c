#include <stdio.h>

int main()
{   long int input,t=9;
	int sum =0;
	printf("Input: ");
	scanf("%ld",&input);
	for (int i=1;i<=input;i++) { 
        sum +=t;
	    t=t*10+9;
	}
	printf("%d \n",sum);

    return 0;
} 