#include <stdio.h>

int main() {
  int a, c, b=0;
    while(scanf("%d", &a) && a != -9999)
    {
        if(a == 0)
        {
             while(scanf("%d", &a) && a != 0)
             {
                 a = a + b;
                 b = a;
             }
            printf("%d ", b);  
        }
    }
  return 0;
}