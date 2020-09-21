#include <stdio.h>

int main() {
  int n, sum = 0;
  float b = 0;
  scanf("%d", &n);
  int Num[n], k = 0;
  while(k < n)
  {
      scanf("%d", &Num[k]);
      sum = Num[k] + b;
      b = sum;
      k++;
  }
  k = 0;
  while(k < n)
  {
      if(Num[k] > b/n)
      {
          printf("%d ", Num[k]);
      }
      k++;
  }
  k = 0;
  while(k < n)
  {
      if(Num[k] < b/n || Num[k] == b/n)
      {
          printf("%d ", Num[k]);
      }
      k++;
  }
  return 0;
}