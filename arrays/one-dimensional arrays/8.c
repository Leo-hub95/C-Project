#include <stdio.h>

int main() {
    int n, k = 0, m = 0, i = 0;
    scanf("%d", &n);
    int Num[n];
    while(k < n)
    {
         scanf("%d", &Num[k]);
        k++;
    }
    while(m < n/2)
    {
        printf("%d ", Num[k/2 + m]);
        m++;
    }
    k = 0;
    while(k < n/2)
    {
        printf("%d ", Num[k]);
        k++;
    }
    return 0;
}