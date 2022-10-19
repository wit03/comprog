//65070503408 Jarukit Jintanasathirakul
#include<stdio.h>

int	prime(int number) {
	int	i=1, count=0;
	while(i<=number) {
		if(number%i==0) {
			count++;
		}
		i++;
	}

    return count==2 ? number : 1;
}
int	main() {
	int	num1, num2, temp=0, temp2=0;
	scanf("%d",&num1);
	scanf("%d",&num2);
	while(num1<=num2) {
		temp=prime(num1);
		if(temp!=1) {
			printf("%d\n",temp);
			temp2++;
	}
		num1++;
	}
	if(temp==1&&temp2==0) {
        printf("None");
    }		
}