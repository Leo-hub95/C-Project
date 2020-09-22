#include <stdio.h>

int main() {
    int i = 0;
    char buffer[100];
    fgets(buffer, 99, stdin);
    fflush(stdin);
    while(buffer[i] != '\0')
    {
           i++; 
    }
    printf("%d", i);
    return 0;
}