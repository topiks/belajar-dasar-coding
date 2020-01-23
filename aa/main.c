#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum;
    scanf("%d", &sum);
    int data[sum];
    int i;
    int jumlah=0;
    for(i=0;i<sum;i++){
        scanf("%d", &data[i]);
        jumlah=jumlah+data[i];
    }
    printf("%d", jumlah);
    return 0;
}
