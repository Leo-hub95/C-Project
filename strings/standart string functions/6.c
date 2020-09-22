#include <stdio.h>
#include <string.h>
int main() 
{
  int i = 0, j = 0, sum1 = 0, ostatok = 0, b = 0, sum2 = 0, b2 = 0;
  int str1;
  scanf("%d", &str1);
   while(str1 != 0)
    {
        if(j < 3){
            ostatok = str1 % 10;
            sum1 =  ostatok + b;
            b = sum1;
        }
        if(j >= 3)
        {
            ostatok = str1 % 10;
            sum2 =  ostatok + b2;
            b2 = sum2;
        }
        str1 = str1 / 10;
        j++;

    }
    if(b == b2)
        printf("yes");
    else
        printf("no");

  return 0;
}