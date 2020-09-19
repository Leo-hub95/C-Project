#include <stdio.h>

int main() {
  int a, b = -9999, i = 1;
    while(scanf("%d", &a) && a != -9999)
    {
         if(b >= a)
         {
             printf("%d", i);
             return 0;
         }
        b = a;
        i = i + 1;
    }
    printf("0");
  return 0;
}