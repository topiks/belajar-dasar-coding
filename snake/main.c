#include <stdio.h>
#include <stdlib.h>

/*void kuadrat(int c){
    int d = c*c;
    printf("%d", d);}
*/

int fungsi( int* b){
    printf("alamat %d\n", b);
    printf("nilai %d", *b);
return b;}
int main (){
    //int a = 5;
    //int *p = &a;

    //printf("%d\n", *p);
    //printf("%d", p);

    int c = 4;
    fungsi(&c);
    return 0;}
