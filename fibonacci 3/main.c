#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    int b = 1;
    int c = 2;
    int n;
    int tot = 0;

    scanf("%d", &n);

    if ( n == 1){
        printf("1 ");
    }
    else if ( n > 1){
        printf("1 ");
    for ( int i = 0; i < n - 1; i ++){
            tot = a + b + c;
             a = b;
             b = c;
             c = tot;
             printf("%d ", a);
    }}
    return 0;
}
