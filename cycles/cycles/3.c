#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    do {
        if (n<=0 || n == -9999) 
        {
            printf("NO"); 
            return 0;
            
        }
        scanf("%d", &n);
    } while (n != -9999);
    printf("YES");
}