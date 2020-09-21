#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int Num[n], k = 0;
  while(k < n)
  {
    scanf("%d", &Num[k]);
    k++;
  }
  k = k - 1;
  while(k != -1)
  {
    printf("%d ", Num[k]); 
    k--;
  }
  return 0;
}