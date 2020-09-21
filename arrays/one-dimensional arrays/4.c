#include <stdio.h>

int main() {
    int n, m = 0, a = 1;
    scanf("%d", &n);
    int Num[n], k = 0;
    while(k < n)
    {
        scanf("%d", &Num[k]);
        k++;
    }
    k = 0;
    while(k < n)
    {
        if(Num[k] < Num[n-1])
        {
          printf("%d ", Num[k]);
          m++;
        }
        k++;    
    }
    if(m == 0)
        printf("0");
  
  return 0;
}