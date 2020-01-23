#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*int size = 4;
    int a[size];
    for( int i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }
    printf ("\n");

    int b[4];
    for( int j = 0; j < size; j++){
        scanf("%d", &b[j]);
    }*/
int a[2][2]={1,2,3,4};
int b[2][2]={5,6,7,8};
    for ( int i = 0; i < 2; i ++){
        for ( int j = 0; j <= i; j ++){
            printf("%d  %d", a[i][j], b[i][j]);
            printf(" + ");
            printf("%d  %d\n", a[i][j], b[i++][j] );
            printf("%d  %d", a[i][j] , b[i][j++] );
            printf(" + ");
            printf("%d  %d\n", a[i][j++],  b[i][j] );
            printf("%d  %d", a[i++][j], b[i][j] );
            printf(" + ");
            printf("%d  %d\n", a[i][j++], b[i++][j++] );
            printf("%d  %d", a[i++][j], b[i][j++] );
            printf(" + ");
            printf("%d  %d", a[i][j++], b[i++][j++] );
        }
    }


    return 0;
}


