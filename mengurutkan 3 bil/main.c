#include <stdio.h>
int main()
{
    int a[3];
    int i,j,k, temp;
    printf("NAMA:TAUFIK HIDAYAT\nNRP:07111940000094\nKELAS:E\nTUGAS:MENGURUTKAN 3 BILANGAN DARI TERBESAR KE TERKECIL");
    for(i=0;i<3;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    for(i=0;i<3;i++){
        printf("%d  ",a[i]);
    }
    return 0;

}
