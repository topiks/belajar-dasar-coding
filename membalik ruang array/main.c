#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    int a[t];
    int temp;
    int kons = 0;
    int yo = t/2;


    if( t % 2 == 0){
    for ( int i = 1; i <= t; i++){
        scanf("%d", &a[i]);
    }
    //printf("\n");

    for ( int i = t; i > t/2; i --){
        printf("%d ", a[i]);

    }

    for ( int i = yo ; i > 0; i--){
            printf("%d ", a[i]);

    }
    }
    /*
    for( int i = 0; i < t; i ++){
        temp = a[i];
        a[i] = a[kons];
        a[kons] = temp;
        kons = kons - 1;
        printf("%d ", a[i]);

        if ( kons - i <= 1){
            break;
        }
    }

    int yo = 0;
    for( int i = (t/2)+1; i < t; i ++){
        temp = a[yo];
        a[yo] = a[i];
        a[i] = temp;
        yo = yo + 1;
        printf("%d ", a[i]);

        if ( kons - i >= 1){
            break;
        }
    }*/
    int h = t/2;
    if( t % 2 == 1){

        for( int i = 1; i <= t; i ++){
            scanf("%d", &a[i]);
        }
        for( int i = t; i >= h + 1; i-- ){
            printf("%d ", a[i]);
        }
        for( int i = h; i >= 1 ; i --){
            printf("%d ", a[i]);
        }
    }
    return 0;
}
