#include <stdio.h>

int main()
{
    int i = 0, n = 0, j = 0, k = 0;
    char buffer[100];
    fgets(buffer, 100, stdin);
    fflush(stdin);
    char f[100] ={0};
    while(buffer[i] != '\0')
    {
        if(buffer[i] != ' ' && buffer[i - 1] == ' ')
        {
          n = i;
          f[k] = ' ';
          printf("%c", f[k]);
          k++;
        }
        if(buffer[i] != ' ' && (buffer[i+1] == ' ' || buffer[i+1] == '\n'))
        {
            j = i;
            while(n <= i)
            {
                f[k] = buffer[i];
                printf("%c", f[k]);
                i--;
                k++;
            }
            i = j;
        }
        i++;
    }
    return 0;
}