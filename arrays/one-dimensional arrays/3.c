#include <stdio.h>

int main() 
{
    int n, m, a = 1;
    scanf("%d", &n);
    int Num[n], k = 0;
    while(k < n)
    {
        scanf("%d", &Num[k]);
        k++;
    }
        k = 0;
    while(k < n)
    {
        if(Num[k]%2 == 0)
        {
            printf("%d ", Num[k]);
        }
        k++;    
    }
    k = 0;
    while(k < n)
    {
        if(Num[k]%2 != 0)
        {
            printf("%d ", Num[k]);
        }
        k++;    
    }
    return 0;
}