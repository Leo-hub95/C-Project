#include <stdio.h>
int main()
{
int a, M, m;
  M = -9999;
  m = 9999;
    do{
        scanf("%d", &a);
        if (a != 0) {
            
        if (a > M) M = a;
        if (a < m) m = a;
        }
    }
    while (a != 0);
    printf("%d %d", M, m);
 return 0;   
}