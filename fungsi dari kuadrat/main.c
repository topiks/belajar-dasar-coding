#include <stdio.h>
#include <stdlib.h>
 int kuadrat(x){
 int y=x*x;
 return y;}

 int tambah( x, y ){
 int p = x + y;
 return p;}

 int tukar( x, y){
 int p;
 p = x;
 x = y;
 y = p;

 return p;
 }
int main()
{
    int t;
    scanf("%d", &t);

    int hasil;
    hasil = kuadrat(t);

    printf("%d", hasil);

    int k;
    scanf("%d", &k);

    int y;
    scanf("%d", &y);

    int jm;
    jm = tambah(k,y);

    printf("%d", jm);

    int r = 9;
    int j = 3;
    printf("%d %d", r, j);
    return 0;
}
