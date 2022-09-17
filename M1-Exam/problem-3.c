//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>
#include <math.h>
int main()
{
  long int input, temp, reverseOrder = 0, c, d;
  scanf("%ld", &input);

  while (1) {
    input++; //next number
    temp = input;
    while(temp) {
      reverseOrder = reverseOrder*10;
      reverseOrder = reverseOrder + temp%10;
      temp = temp/10;
    }
    //check if reverseOrder = original input
    if (reverseOrder == input && input != 1)
    {
      d = (int)sqrt(input);
      //checking if its prime number or not
      for (c = 2; c <= d; c++)
      {
        if (input%c == 0)
          break;
      }
      if (c == d+1)
        break;
    }
    reverseOrder = 0;
  }
  printf("%ld\n",input);
  return 0;
}