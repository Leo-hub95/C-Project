#include <stdio.h>

int main() {
  int N, i = 1, a;
    scanf("%d", &N);
    if(N == 1)
        printf("1");
    while(i*i < N)
    {
        a = i*i;
       printf("%d ", a); 
        i++;
    }
  return 0;
}