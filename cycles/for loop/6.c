#include <stdio.h>

int main() {
    int n, sum1, sum2, sum, k, r;
    scanf("%d", &n);
    sum1 = 1;
    sum2 = 1;
    k = 1;
    r = 0;
    if(n == 0)
        printf("%d", r);
    else if(n == 1 || n == 2)
        printf("%d", k);
    else if(3 <= n && n <= 45)
    {
        for(int i = 3; i <= n; i++)
        {
            sum = sum1 + sum2;
            sum1 = sum2;
            sum2 = sum;
        }
        printf("%d", sum);
    }
    return 0;
}