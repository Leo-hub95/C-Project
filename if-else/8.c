#include <stdio.h>

int main() {
  int day,month;
  scanf("%d %d", &day,&month);
  if (((month==4 || month==6 || month==9 || month==11) && day>30)||(month==2 && day>29)){
      printf("error");
  }
  else {
      printf("correct");
  }
    return 0;
}