#include <stdio.h>
#include <locale.h>
int main() {
  int n;
    scanf("%d", &n);
    if(n <= 6)
        printf("����������");
    else if(7 <= n && n <= 18)
        printf("��������");
    else if(19 <= n && n <= 59)
        printf("�������");
    else if(n >= 60)
        printf("���������");
  return 0;
}