#include <stdio.h>
int main(void){
  int number, i = 0, j = 0, quantity = 0, p = 0;
    char ch = 65, alfa[26] = {0};
    scanf("%d", &number);
    char arr[number];
    while(i <= number){
        scanf(" %c", &arr[i]);
        ++i;
    }
    while(j < 26)
    {
        i = 0;
        p = 0;
        quantity = 0;
        while(p < number)
        {
            if(ch == arr[i] || (ch + 32) == arr[i])
                quantity++;
            i++;
            p++;
        }
        alfa[j] = quantity;
        printf("%d ", alfa[j]);
        ch++;
        j++;
    }
  return(0);
}