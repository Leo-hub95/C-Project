#include <stdio.h>
int chislo(int n)
{
    
    for(int i =2; i < (n-1); i++)
    {
        if( n%i == 0)
        return 0;
    }
       return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", chislo(n));
}