#include <stdio.h>

int main() 
{
  int n = 0;
  while(n++ < 100)
  {
    if(n%3 != 0 && n%5 != 0)
        printf("%d ", n);
    if(n%3 == 0 && n%5 != 0)
        printf("Fizz ");
    if(n%3 != 0 && n%5 == 0)
        printf("Buzz ");
    if(n%3 == 0 && n%5 == 0)
        printf("FizzBuzz "); 
  }
  return 0;
}