#include <stdio.h>

int main() 
{
  int n, k = 0, sum = 0;
  double b = 0;
  scanf("%d", &n);
  int Num[n];
  while(k < n)
  {
      scanf("%d", &Num[k]);
      sum = Num[k] + b;
      b = sum;
      k++;
  }
  printf("%.2lf", b/n);
  return 0;
}