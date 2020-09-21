#include <stdio.h>
#include <math.h>
int main(void)
{
    int N, i = 0, j = 0, num = 0, sum = 0, num1 = 0, sum1 = 0, b = 1;
    scanf("%d", &N);
    int arr[N][N];
    while(i < N)
    {
        while(j < N)
        {
            scanf("%d", &arr[i][j]);
            if((i + j) >= N)
            {
                sum1 = arr[i][j] + num1;
                num1 = sum1;
            }
            
            j++;
        }
        j = 0;
        i++;
    }
    i = 0;
    while(i < N)
    {
        j = b;
        while(j < N)
        {
            sum = arr[i][j] + num;
            num = sum;
            j++;
        }
        b++;
        i++;
    }

    if(num < num1)
        printf("%d %d", num, num1);
    else if(num1 <= num)
        printf("%d %d", num1, num);
   
    return 0;
}