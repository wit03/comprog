//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main() {
  int input, reverse = 0, temp;
  scanf("%d", &input);
  temp = input;
  while (temp != 0) {
    reverse = reverse * 10 + temp % 10;
    temp /= 10;
  }
  if(input == reverse) {
    printf("%d is a palindrome number", input);
  } else {
    printf("%d is not a palindrome number", input);
  }

  return 0;
}