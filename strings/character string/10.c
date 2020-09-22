#include <stdio.h>

int main() {
    int i = 0, b = 0, c = 0, f = 0;
    char s[100];
    fgets(s, 100, stdin);
    fflush(stdin);
    while(s[i] != '\0')
    {
        if((s[i] >= '0' && s[i] <= '9') || (s[0] == '-' || s[0] == '+'))
        {
            b++;   
        }
        if(s[i] == '.')
        {
            if(s[i-1] >= '0' && s[i-1] <= '9' && s[i+1] >= '0' && s[i+1] <= '9')
            {
                c++;
            }
            else
            {
                f++;
            }
        }
        else if(s[i] > 32 && s[i] < 48 && s[0] != '+' && s[0] != '-')
        {
            f++;
        }
        i++;
    }
    if(b > 0 && c == 0 && f == 0 && s[i-1] != '+' && s[i-2] != '-')
    {
        printf("int");          
    }
    else if(c == 1 && f == 0)
    {
        printf("float");           
    }
    else
    {
        printf("error");
    }
    return 0;
}
