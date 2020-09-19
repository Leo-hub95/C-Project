#include <stdio.h>
#include <math.h>
int main() 
{
    int n, m = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
            m++;
        }
    }
    printf("\n"); 
    printf("%d", m);
    return 0;
}