#include <stdio.h>
#include <locale.h>
int main() {
  int n;
    scanf("%d", &n);
    if(n <= 6)
        printf("дошкольник");
    else if(7 <= n && n <= 18)
        printf("школьник");
    else if(19 <= n && n <= 59)
        printf("рабочий");
    else if(n >= 60)
        printf("пенсионер");
  return 0;
}