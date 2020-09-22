#include <stdio.h>

int main() {
  int n, i = 0, step, N = 0, S = 0, W = 0, E = 0;
  scanf("%d", &n);
  char direction[100];
  while(i < n)
  {
    scanf("%s %d", &direction, &step);
    switch (direction[0])
    {
     case 'N': N = N + step; break;
     case 'S': S = S + step; break;
     case 'W': W = W + step; break;
     case 'E': E = E + step; break;
     default: break;
    }
    i++;
  }
  printf("%d %d", E - W, N - S);
  return 0;
}