#include <stdio.h>

int main() {
  int n;
    scanf("%d", &n);
    if(n > 500)
        printf("%d", 350 + (n - 500)*2);
    if(n <= 500)
        printf("350"); 
  return 0;
}