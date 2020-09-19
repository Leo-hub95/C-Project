#include <stdio.h>

int main() {
    int n, i = 1, k = 1;
    scanf("%d", &n);
    do{
        while(k <= i)
        {
            printf("%d ", k); 
            k = k + 1;
        }
    printf("\n");
    i = i + 1;
    k = 1;
    }while(i <= n);
    return 0;
}