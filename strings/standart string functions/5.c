#include <stdio.h>

int main() {
  int i = 0, j = 0;
  char str1[50], str2[50];
  gets(str1); gets(str2);
  if(strlen(str1) == strlen(str2))
  {
      while(str1[i] != '\0')
      {
           if((str1[i] == str2[i]) || str1[i] == (str2[i] + 32) || str1[i] == (str2[i] - 32))
           {
               j++;
           }
       i++;
      }
      if(j == strlen(str1))
          printf("yes");
      else
          printf("no");
  }
  else
      printf("no");
  return 0;
}