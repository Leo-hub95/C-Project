#include <stdio.h>

int main() {
    int b1, b2, b3;
    scanf("%d%d%d%d", &b1, &b2, &b3);
    if(b1*b2*b3 == 64 && b1+b2+b3 == 14)
        printf("open");
    else
        printf("close");
    return 0;
}