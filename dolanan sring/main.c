#include <stdio.h>
#include <stdlib.h>


int fibke ( int n ){
    int a, b =1, c = 1;
    for ( int i = 0; i < n; i++){
    a = b;
    b = c;
    c = a + b;}
    return b;
}

int main (){
    int n;
    scanf("%d", &n);
    printf("%d %d", n, fibke(n-1));

    return 0;
}
