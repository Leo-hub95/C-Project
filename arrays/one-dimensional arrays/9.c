#include <stdio.h>

int main() {
    int quantity, k = 0, max, min, i_max = 0, i_min = 0;
    scanf("%d", &quantity);
    int Num[quantity];
    while(k < quantity)
    {
        scanf("%d", &Num[k]);
        k++;
    }
    max = min =Num[0];
    k = 0;
    while(k < quantity)
    {
        if(max < Num[k])
        {
            max = Num[k];
            i_max = k;
        }
        if(min > Num[k])
        {
            min = Num[k];
            i_min = k;
        }
        k++;
    }
    k = 0;
    while(k < quantity)
    {
        if(k == i_min)
            printf("%d ", Num[i_max]);
        else if(k == i_max)
            printf("%d ", Num[i_min]);
        else
            printf("%d ", Num[k]);
        k++;
    }
    return 0;
}