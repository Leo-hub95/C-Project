#include <stdio.h>
#include <math.h>
int main(void)
{
    int N, M, i = 0, j =0, b, num, max = 0, min = 0, Mmax = 0, Mmin = 0;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    int  sum[M];
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
        //printf("%d ", sum[b]);
        b++;
    }
    b = 0;
    max = sum[0];
    min = sum[0];
    while(b < M)
    {
        if(max < sum[b]){
            max = sum[b];
            Mmax = b;
        }       
        if(min > sum[b]){
            min = sum[b];
            Mmin = b;
        }
        b++;
    }
    printf("\n");
    //printf("\n");
    i = 0;
    j = 0;
    while(i < N)
    {
        while(j < M)
        {
            if(j == Mmin)
            {
                printf("%d ", arr[i][Mmax]);
            }
            else if(j == Mmax)
            {
                printf("%d ", arr[i][Mmin]);
            }
            else
                printf("%d ", arr[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }
    
  return 0;
}