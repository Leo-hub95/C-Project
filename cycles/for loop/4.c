#include <stdio.h>

int main() {
    int k, m, a, b;
    scanf("%d%d", &a, &b);
         for( int k = a; b >= k; b--)
        {
            printf("%d%c", b, ' ');
        }
    return 0;
}