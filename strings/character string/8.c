#include <stdio.h>

int main() {
    int i = 0, a = -1, a1 = -1, b = -1, b1 = -1, v = 0, v1 = 0;
    char buffer[100];
    fgets(buffer, 100, stdin);
    fflush(stdin);
    while(buffer[i] != '\0')
    {
        if(buffer[i] == '/' && v == 0)
        {
            a = i;
            i++;
            v++;
            if(buffer[i] == '*')
            {
                a1 = i;
                i++;
            }
        }
        if(buffer[i] == '*' && v1 == 0)
        {
            b = i;
            i++;
            v1;
            if(buffer[i] == '/')
            {
                b1 = i;
                i++;
            }
        }  
        i++;
    }
    i = 0;
    if(a >= 0 && a1 >= 0 && b >= 0 && b1 >= 0)
    {
        while(buffer[i] != '\0')
        {
            if(i < a || i > b1)
            {
                printf("%c", buffer[i]);
            }
            i++;
        }
    }
    else
    {
        while(buffer[i] != '\0')
        {
            printf("%c", buffer[i]);
            i++;
        }
    }
    return 0;
}