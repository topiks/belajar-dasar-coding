#include <stdio.h>
#include <stdlib.h>

void ayoapani( int n )
{
    //segitiga atas

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

}

int main(){

ayoapani(3);

return 0;
}
