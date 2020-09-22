#include <stdio.h>

int main()
{
    int i = 0, n = 0, j = 0;
    char f[100];
    char buffer[100];
    fgets(buffer, 100, stdin);
    fflush(stdin);
    while(buffer[i] != '\0')
    {
        if(buffer[i] == ' ')
        {
          f[j] = ' ';
          j++;
        }
        if(buffer[i] != ' ')
        {
            n = i;
            i++;
            while(buffer[i] != ' ')
            {
                if(buffer[n] == buffer[i] && (buffer[i+1] == ' ' || buffer[i+1] == '\n'))
                {
                    while(n <= i)
                    {
                        f[j] = buffer[n];
                        j++;
                        n++;
                    }
                    
                }
                if(buffer[i] == '\0')
                  break;
                i++;
            }
            i--;
            n = 0;
        }
        i++;
    }
    j = 0;
    if(f[0] == ' ')
    {
        while(f[j] == ' ')
            j++;
    }
    while(f[j] != '\0')
    {
        if(f[j] != ' ')
            printf("%c", f[j]);
        if(f[j] == ' ' && f[j-1] != ' ')
            printf("%c", f[j]);
        j++;
    }
    return 0;
}