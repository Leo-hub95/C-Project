#include <stdio.h>
int main(void)
{
    int N, i = 0, j =0, k =1;
    scanf("%d", &N);
    int arr[N][N];
    int ch;
    while(i < N)
    {
        k =1;
        ch = N;
        while(j < N)
        {
            if(i%2 == 0)
            {
                arr[i][j] = k;
                printf("%d ", arr[i][j]);
                k++;
            }
            if(i%2 != 0)
            {
                arr[i][j] = ch;
                printf("%d ", arr[i][j]);
                ch--;
            }
            j++;
        }
        i++;
        j = 0;
        printf("\n");
    }
    return 0;
}