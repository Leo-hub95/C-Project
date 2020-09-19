#include <stdio.h>

int main() {
    int k, m, n = 0;
    scanf("%d%d", &k, &m);
    if(k <=0)
    {
        for( int k = 1; k <= m; k++)
        {
            printf("%d%c", k, ' ');
            n++;
        }
        printf("\n");
        printf("%d", n);
    }
    else
    {
         for( int a = k; k <= m; k++)
        {
            printf("%d%c", k, ' ');
              n++;
        }
        printf("\n");
        printf("%d", n);
    }
    return 0;
}