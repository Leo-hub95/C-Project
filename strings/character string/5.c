#include <stdio.h>

int main() {
    int i = 0;
    char buffer[100];
    fgets(buffer, 100, stdin);
    fflush(stdin);
    while(buffer[i] != '\0')
    {

        if(buffer[i] != ' ')
            printf("%c", buffer[i]);
        if(buffer[i] == ' ' && buffer[i-1] != ' ')
            printf("%c", buffer[i]);

        i++;
    }
    return 0;
}