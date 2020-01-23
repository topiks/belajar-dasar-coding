#include <stdio.h>
#include <stdlib.h>

int main()
{
    int piro;
    scanf("%d", &piro);

    int data[piro];
    int bil;

    for(int i = 1; i <= piro; i++){
        data[i] = i;
        bil= 0.5*i*(i+1);
        printf("%d ", bil);
    }
    return 0;
}
