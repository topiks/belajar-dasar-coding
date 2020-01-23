#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    int a[t];
    int p;
    for ( int i = 1; i <= t*t; i ++){
            for ( int p = 1; p <= p*p; p ++){
        if (i % p == 0){
            printf("%d ", p);
        }}}
    return 0;
}
