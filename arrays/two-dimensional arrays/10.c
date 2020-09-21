#include <stdio.h>
int main()
{
int n, m;
scanf("%d %d", &n, &m);
int Arr[n][m];
int i=0, j, k = 1, p=1, t = 0;
while(i < n*m)
{
    if( i < n*m)
    {
    j = k - 1;
        while(j<m-k+1)
        {
            Arr[k-1][j]=p++;
            j++;
            i++;
        
        } 
    }
    if( i < n*m)
    {
    j = k;
        while(j < n-k+1)
        {
            Arr[j][m-k]=p++;
            j++;
            i++;
        }
    }
    if( i < n*m)
    {
    j = m - k - 1;
        while(j >= k - 1)
        {
            Arr[n-k][j]=p++;
            j--;
            i++;
        }
    }
    if( i < n*m)
    {
    j = n - k - 1;
        while(j >= k)
        {
            Arr[j][k-1]=p++;
            j--;
            i++;
        }
    }
    k++;
 }
for (int q=0; q<n; q++)
{
    for (int w=0; w<m; w++)
    {
        printf("%3d", Arr[q][w]);
    }
    printf("\n");
}
return(0);
}