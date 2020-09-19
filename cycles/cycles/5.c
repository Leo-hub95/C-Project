#include <stdio.h>

int main()
{
  int num, num1, a = 1;
    scanf("%d", &num);
    while(scanf("%d", &num1))
    {
        if(num1 == -9999)
        {
             break;   
        }
        if(num1 <= num) 
        {    
            a = 0;
        }
        num = num1;
    }
    switch(a)
    {
        case 1: printf("YES");
            break;
        case 0: printf("NO");
            break;
    }
  return 0;
}