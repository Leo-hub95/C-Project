#include <stdio.h>
#include <math.h>
int main(void)
{
    int N, i = 0, j = 0, num = 1, sum = 0, num1 = 1, sum1 = 0;
    scanf("%d", &N);
    int arr[N][N];
    while(i < N)
    {
        while(j < N)
        {
            scanf("%d", &arr[i][j]);
            if(i == j)
            {
               sum = arr[i][j] * num;
               num = sum;
            }
            if((i + j) == (N - 1))
            {
               sum1 = arr[i][j] * num1;
               num1 = sum1;
            }
            j++;
        }
        j = 0;
        i++;
    }
    if(num1 > num)
        printf("%d %d", num1, num);
    else
        printf("%d %d", num, num1);
    return 0;
}