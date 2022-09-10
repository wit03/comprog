//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

int main() {
  int input, reverse = 0;
  scanf("%d", &input);
  while (input != 0) {
    reverse = reverse * 10 + input % 10;
    input /= 10;
  }
  printf("%d", reverse);

  return 0;
}