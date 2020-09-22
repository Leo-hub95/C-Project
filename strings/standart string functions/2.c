#include <stdio.h>

int main() {
  char str1[25], str2[4], str3[2] = ".";
  scanf("%s", str1);
  scanf("%s", str2);
  strcat(str1, str3);
  strcat(str1, str2);
  printf("%s", str1);
  return 0;
}