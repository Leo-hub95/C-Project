#include <stdio.h>

int main(void) {

int N, M, i = 0, j = 0 ;
scanf("%d %d", &N, &M);
int arr[N][M];
while(i < N)
{
    while(j < M)
    {
        scanf("%d ", &arr[i][j]);
        j++;
    }
    j = 0;
    i++;
}
i = 0;
j = 0;
while(i < N)
{
    while(j < M)
    {
        printf("%d ", arr[i][j]);
        j++;
    }
    j = 0;
    i++;
    printf("\n");
}
  return 0;
}