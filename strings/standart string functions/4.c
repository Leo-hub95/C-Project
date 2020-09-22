#include <stdio.h>

int main() {
  char str1[50], str2[50];
  scanf("%s%s", str1, str2);
  int n = strcmp(str1, str2);
  if(n == 0)
      printf("yes");
  else
      printf("no");
             
  return 0;
}