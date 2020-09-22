#include <stdio.h>
int main() {
    char str[100];
    int wordsCount = 0;
    
    fgets(str, 100, stdin);
    fflush(stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\n')) {
            wordsCount++;
        }
    }
    
    printf("%d", wordsCount);
    
    return 0;
}