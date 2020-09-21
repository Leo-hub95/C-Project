#include <stdio.h>
#include <math.h>
int main(void)
{
    int N, M, i = 0, j =0, b, num;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    int sum[M];
    while(i < N)
    {
        while(j < M)
        {
            scanf("%d", &arr[i][j]);
            j++;
        }
        i++;
        j = 0;
    }
    i = 0;
    j = 0;
    b = 0;
    num = 0;
    while(j < M)
    {
        num = 0;
        while(i < N)
        {
            sum[b] = arr[i][j] + num;
            num = sum[b];
            i++;
        }
        j++;
        i = 0;
        b++;
    }  
    while(b-- > 0)
    {
        printf("%d ", sum[b]);
    }
    return 0;
}