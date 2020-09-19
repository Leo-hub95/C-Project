#include <stdio.h>

int main() {
  int N, i = 0;
    scanf("%d", &N);
    if(N == 0)
    printf("1");
    else{
    while(N != 0)
    {
        N = N/10;
        i++;
    }
    printf("%d", i);
    }
  return 0;
}