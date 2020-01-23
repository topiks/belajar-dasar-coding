#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    //segitiga duwur

    scanf("%d", &n);

    for ( int h = 1; h <= n; h++){


    for ( int y = n-1; y >= h; y--){
        printf(" ");
    }


    for ( int k = h; k > 1; k--){
        printf("%d", k);
    }

    for ( int i = 1; i <= h; i++){
        printf("%d", i);
    }
    printf("\n");
}

    //segitiga ngisor
int p = 1;
for ( int w = n-1; w >= 1; w--){

    for ( int y = 1; y <= p; y++){
        printf(" ");
    }
    p++;

    for ( int k = w; k > 1; k--){
        printf("%d", k);
        }

    for ( int i = 1; i <= w; i++){
        printf("%d", i);
    }

    printf("\n");}

    return 0;
}
