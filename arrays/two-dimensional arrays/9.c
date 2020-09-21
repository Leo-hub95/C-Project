#include <stdio.h>

int main ()
{
    int n, k, str = 0, str1 = 0, stol = 0, stol1 = 0;
    scanf("%d", &n);
    int arr[n][n];
    
    while(str < n)
    {
        while(stol < n)
        {
            scanf("%d", &arr[str][stol]);
            stol++;
        }
        str++;
        stol = 0;
    }
    scanf("%d", &k);
    while(k > n)
    {
        k = k - n;
    }
    int t[n][k];
    str = 0;
    while(str < n)
    {
           
        while(stol1 < k)
        {
            t[str][stol1] = arr[str][n - k + stol1];
            stol1++;
        }
        str++;
        stol1 = 0;
    }
    str = 0;
    stol = n - k - 1;
    while(str < n)
    {
        while(stol >= 0)
        {
            arr[str][stol + k] = arr[str][stol];
            stol--;
        }
        str++;
        stol = n - k - 1;
    }
    str = 0;
    stol = 0;
    while(str < n)
    {
        while(stol < k)
        {
            arr[str][stol] = t[str1][stol1];
            stol++;
            stol1++;
        }
        str++;
        stol = 0;
    }
    str = 0;
    stol = 0;
    while(str < n)
    {
        while(stol < n)
        {
            printf("%d ", arr[str][stol]);
            stol++;
        }
        str++;
        stol = 0;
        printf("\n");
    }
    return 0;
}