#include <stdio.h>

int main() {
  int a, b;
    while(scanf("%d", &a) && a != -9999)
    {
        if(a == 2517)
        {
             while(scanf("%d", &a) && a != -9999)
             {
                 printf("%d ", a);   
             }
        }
    }
  return 0;
}