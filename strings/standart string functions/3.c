#include <stdio.h>

int main() {
    int i = 0, j = 0;
    char str1[50], str2[50];
    scanf("%s %s", str1, str2);
    while(str1[i] != '\0')
    {
        i++;
    }
    while(str2[j] != '\0')
    {
        j++;
    }
    if((str1[i-1] == str2[0]) || (str1[i-1] == str2[0] + 32))
        printf("yes");
    else if((str1[0] == str2[j-1]) || (str1[0] + 32 == str2[j-1]))
    {
        printf("yes");
    }
    else
        printf("no");
    
       return 0;
}