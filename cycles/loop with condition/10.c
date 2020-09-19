#include <stdio.h>
#include <math.h>

int main() {
  int N, a = 1, i = 0;
    scanf("%d", &N);
    if(N == 1)
        printf("1");
    else
    {
        while(a < N)
        {
            a = a * 2;
            i++;
        }
        printf("%d", i);
    }
  return 0;
}