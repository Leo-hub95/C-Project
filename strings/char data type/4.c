#include <stdio.h>

int main() {
  char ch, ch1 = 48, ch2 = 57, let1 = 65, let2 = 90;
    scanf("%c", &ch);
    if(ch1 <= ch && ch <= ch2)//צטפנû
        printf("digit");
    else if((let1 <= ch && ch <= let2) || (let1 + 32 <= ch && ch <= let2 + 32))
        printf("en");
    else
        printf("error");
  return 0;
}