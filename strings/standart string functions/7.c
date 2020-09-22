#include <stdio.h>

int main() {
    int i = 0, j = 0, k = 0;
    char str1[50], str2[50];
    gets(str1); gets(str2);
    while(str2[i] != '\0')
    {
         while(str1[j] != '\0')
         {
             if(str2[i] == str1[j])
             {
                k++;   
                 str1[j] = ' ';
                break;
             }
             j++;
         }
        j=0;
        i++;
    }
    if(k == i)
        printf("yes");
    else
        printf("no");
    return 0;
}