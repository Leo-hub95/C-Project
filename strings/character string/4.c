#include <stdio.h>
int main()
{
    int i = 0, t = 1, sum = 0;
    char buffer[100];
    fgets(buffer, 100, stdin);
    fflush(stdin);
    while(buffer[i] != '\0')
    {
        i++;
    }
    i = i - 1;
    
	while(0 <= buffer[i])
	{
	    
		if(buffer[i] == '1')
		{
		    sum = sum + t;
		    //sum = t;
		    
		}
		t = t * 2;
		--i;
	}
	printf("%d", sum/2);
    return 0;
}