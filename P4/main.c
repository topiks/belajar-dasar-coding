#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],b[3][3],c[3][3];

    printf("Masukkan Nilai Matrik A:\n");
    for ( int i = 0; i < 3 ; i ++){
        for ( int j = 0; j < 3; j ++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Masukkan Nilai Matrik B:\n");
    for ( int i = 0; i < 3 ; i ++){
        for ( int j = 0; j < 3; j ++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("Hasil:\n");
    for ( int i = 0; i < 3 ; i ++){
        for ( int j = 0; j < 3; j ++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
