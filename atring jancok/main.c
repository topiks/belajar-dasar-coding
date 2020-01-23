#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tukar(char t[100], char y[100]){

char c[100];
for ( int i = 0; i < 100; i ++){

            c[i] = t[i];
            t[i] = y[i];
            y[i] = c[i];}
}


int main(){
char a[100], b[100];
int i,j;

fgets ( a,50, stdin);
a[strcspn(a,"\n")] = 0;

fgets ( b,50, stdin);
b[strcspn(b,"\n")] = 0;

printf("\n%s\n", a );
printf("%s\n", b );

printf("DITUKAR");

tukar (a,b);
printf("\n%s\n", a );
printf("%s\n", b);

return 0;
}
