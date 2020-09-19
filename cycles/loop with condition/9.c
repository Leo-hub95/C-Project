#include <stdio.h>
#include <math.h>
int main()
{
    int N, a = 1, i = 0;
    scanf("%d", &N);
    if(N == 1)
        printf(" ");
    else
    {
        while(a < N)  
        {
             a = a * 2;
             i++;
             if(pow(2, i) <= N)
             {
               printf("%d ", i);
             }
             
        }
    }
    return 0;
}