#include <stdio.h>
int main(void)
{
    int N, M, i = 0, j =0;
    scanf("%d %d", &N, &M);
    int arr[N][M];
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
    while(i < M)
    {
        while(j < N)
        {
            printf("%d ", arr[j][i]);
            j++;
        }
        i++;
        j = 0;
        printf("\n");
    }  
    return 0;
}