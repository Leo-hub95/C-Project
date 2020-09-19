#include <stdio.h>

int main() {
  int n, numbers, ch = -2147483648, i = 1;
    scanf("%d", &n);
     
    do{
    scanf("%d", &numbers);
    if(ch < numbers)     
        printf("%d ", numbers); 
    ch = numbers;
    i = i + 1;
    }while(i <= n);
  return 0;
}