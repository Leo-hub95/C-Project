#include <stdio.h>

int main() 
{
    int n, m, a = 0;
    scanf("%d", &n);
    int Num[n], k = 0;
    while(k < n)
    {
        scanf("%d", &Num[k]);
        k++;
    }
    k = k - 1;
    m = 0;
    while(m < n)
    {
        if(Num[m] < Num[k] && Num[m] > Num[0])
        {
            printf("%d ", Num[m]);
            a++;
        }
        m++;
    }
    if(a == 0)
        printf("0");
    return 0;
}