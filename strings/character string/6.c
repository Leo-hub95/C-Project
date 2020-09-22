#include <stdio.h>

int main() {
    int i = 0;
    char buffer[100];
    char buffer1[100];
    fgets(buffer, 100, stdin);
    fgets(buffer1, 100, stdin);
    fflush(stdin);
    
   while( buffer[i] != '\0' && buffer1[i] != '\0')
   {
       if (buffer[i] != buffer1[i])
           i++;
   }
    
    printf("%d",i);
    return 0;
}