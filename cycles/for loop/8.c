#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for( int k = a; k <= b; k++)
    {
       for(int d = 0; d < k ; d++) 
       {
           printf("%4d", k);
       }
    }
    
    return 0;
}