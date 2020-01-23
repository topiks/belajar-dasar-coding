#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,k;
    scanf("%d", &a);

    for( i = 1; i <= a; i++)
    {
    k = i*i;
    if( k >= a)
    {
    break;}
    printf("%d ", k);
    }


    return 0;
}
