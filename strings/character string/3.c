#include <stdio.h>

int main() {
  char buffer[100];
  char letter;
  int i = 0, d = 0;
  scanf("%c ", &letter);
  fgets(buffer, 100, stdin);
  fflush(stdin);
  while(buffer[i] != '\0')
  {
      if(buffer[i] == letter)
       {
          d = i;
          break;
       }
       else
       {
           d = -1;   
       }
       i++;
  }
    printf("%d", d);
  return 0;
}