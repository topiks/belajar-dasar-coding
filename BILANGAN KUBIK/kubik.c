#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf( "%d" , &size);
    int kubik;

    for( int i = 1; i <= size; i++ ){
        kubik = i * i * i ;
        printf("%d ", kubik);
    }
    return 0;
}
