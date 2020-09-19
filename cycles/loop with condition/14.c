#include <stdio.h>
 
int main(void)
{
    int a, b, i;
    i = 1;
    scanf("%d%d", &a, &b);
  
    while(i % a != 0 || i % b != 0)
    {
        i = i + 1;
    }
    printf("%d\n", i);
    return 0;
}