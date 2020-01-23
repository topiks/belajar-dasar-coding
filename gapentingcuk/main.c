#include <stdio.h>
#include <stdlib.h>

int main()
{
    for ( int h = 1; h < 5; h++){
        for ( int i = 1; i <= h; i ++){
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}
