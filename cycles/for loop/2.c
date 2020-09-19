#include <stdio.h>

int main() {
    int k, m;
    scanf("%d%d", &k, &m);
    if(k <=0)
    {
        for( int k = 1; k <= m; k++)
        {
            printf("%d%c", k, ' ');
        }
    }
    else
    {
         for( int a = k; k <= m; k++)
        {
            printf("%d%c", k, ' ');
        }
    }
    return 0;
}