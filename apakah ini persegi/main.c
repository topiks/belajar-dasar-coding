#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n ;
    int y;

    scanf("%d", &n);

    y = sqrt(n);


    int h[y][y];

    if ( y*y != n){
        printf("Mustahil");
    }

    if ( y*y == n ){
        for ( int i = 0; i < y; i++ ){
            for ( int j = 0; j < y; j++){
                printf("*");
            } printf("\n");
        };
    }
    return 0;
}
