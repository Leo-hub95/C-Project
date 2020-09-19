#include <stdio.h>

int main() {
  double N, e = 0;
  int k = 1, i = 1;
  scanf("%lf", &N);
    while(1./k > N)
    {
       k = k * i;
       e = e +  1./k;
        i++;
    }
    
      printf("%.8lf", e+1);
  return 0;
}