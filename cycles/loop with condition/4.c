#include <stdio.h>

int main() {
  int n, sum = 0;
    do{
        scanf("%d", &n);
       sum = sum + n;     
    }while(n != 0);
    printf("%d", sum);
  return 0;
}