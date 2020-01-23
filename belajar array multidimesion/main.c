#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2]={1,2,3,4};
    int panjang = sizeof(a)/8;
  /*  printf("%d\n", panjang);

    for ( int i = 0; i < panjang; i ++){

    for ( int j = 0; j < panjang; j ++){
        printf("%d  ", a[i][j]);
    }
    printf("\n");
    }
    printf("\n");
*/
    int b[2][2]={5,6,7,8};
  /*  for ( int i = 0; i < panjang; i ++){

    for ( int j = 0; j < panjang; j ++){
        printf("%d  ", b[i][j]);
    }
    printf("\n");
    }*/
    int i; int j;
    for (int i = 0; i < panjang ; i ++){
        for ( int j = 0; j <= panjang ; j ++){
            printf("%d + %d  ", a[i][j], b[i][j]);
        if(j > i){
        printf("%d + %d "), a[i][j], b[i][j];}
        break;
        printf("\n");
        }
    }



    return 0;
}
