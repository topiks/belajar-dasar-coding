#include <stdio.h>

int main (){

int t;
scanf("%d", &t);

for( int i = 1; i <= t; i++ ){
    for( int j = 1; j <= i; j++){
        printf("* ");
    }
    for ( int k = t; k > i; k--){
        printf("  ");
    }
    for ( int m = t; m > i; m--){
        printf("  ");
    }
    for ( int n = 1; n <= i; n ++){
        printf("* ");
    }
    printf("\n");
}


for( int i = 1; i <= t; i++){
    for( int j = t-1; j >= i; j--){
        printf("* ");
    }
    for ( int q = 1;q <= i; q++ ){
        printf("  ");
    }
    for ( int b = 1; b <= i; b++){
        printf("  ");
    }
    for ( int h = t-1; h >= i; h--){
        printf("* ");
    }
printf("\n");
}




}
