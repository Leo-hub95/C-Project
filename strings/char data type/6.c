#include <stdio.h>

int main() {
  int n, i, p = 91;
    scanf("%d", &n);
    p -= n;
    while(p < 91)
    {
        printf("%c", p);
        p++;
    }
  return 0;
}