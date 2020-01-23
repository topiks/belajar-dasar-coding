#include <stdio.h>
#include <stdlib.h>

int main(){
    int h;
    scanf("%d", &h);

    int data[h];
    int i;
    for ( int i = 1; i <= h; i++){
    scanf("%d", &data[i]);
    }

    int sementara;
    int k = h;
    i=1;
    while(i<=h){
        sementara = data[i];
        data[i] = data[k];
        data[k] = sementara;
        i++;
        k--;
        if( k - i <= 1){
            break;
        }
        printf("%d %d", data[i], data[k]);
    }

    return 0;
}
