#include <stdio.h> 
int main() { 
int N, a; 
scanf("%d", &N); 
int i, j, b, c; 
int array[N][N]; 
i = 0; 
j = 0; 
b = 0; 
c = 1; 
while(i < N) 
{ 
    while(j < N) 
    { 
        array[i][j] = c; 
        c++; 
        j++; 
    } 
    c = 1; 
    b++; 
    j = b; 
    i++; 
} 
i = 0; 
j = 0; 
b = 0; 
c = 1; 
while(j < N) 
{ 
    while(i < N) 
    { 
        array[i][j] = c; 
        c++; 
        i++; 
    } 
    c = 1; 
    b++; 
    i = b; 
    j++; 
} 

for (i = 0; i < N; i++) 
{ 
    for (j = 0; j < N; j++) 
    { 
        printf("%d ", array[i][j]); 
    } 
    printf("\n"); 
} 
// put your code here 
return 0; 
}