#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    int sum = 0;

    for( int i = 1; i <= t; i++){
        for( int j = t; j > i; j--){
            printf(" ");
        }
        for( int k = 1; k <= i; k++){
            printf("* ");
        }
    printf("\n");
    }


    for( int i = 1; i <= t; i++){
        for ( int y = 1; y <= i; y++){
            printf(" ");
        }
        for ( int a = t; a > i; a--){
            printf("* ");
        }
    printf("\n");
    }


    return 0;
}
