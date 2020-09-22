 #include <stdio.h>
  int main()
  {
  int c = 0, d = 0, i;
      scanf("%d", &i);
  char s[20];
    while (i) 
    { 
        s[c] = i % 10 + '0'; 
        i /= 10; 
        ++d; 
        if ( !(d % 3) && i) 
        { 
            s[++c] = ' '; 
        } 
        ++c; 
    } 
    while (c) 
    { 
        putchar(s[--c]); 
    } 
  return 0;
  }