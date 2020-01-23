#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tukar( char t[11], char y[12]){

    char temp;


    for ( int i = 0 ; i < 11; i ++){
    temp = t[i];
    t[i] = y[i];
    y[i] = temp;}

printf("Setelah ditukar\n");

for ( int i = 0; i < 10; i ++){
    printf("%c", t[i]);
}
printf(" ");
for ( int i = 0; i < 10; i ++){
    printf("%c", y[i]);
}
printf("\n\n");
}

int main (){

 char a[10];
 char b[11];

 for ( int i = 0; i < 10; i ++){
    scanf("%c", &a[i]);
 }

  for ( int i = 0; i < 10; i ++){
    scanf("%c", &b[i]);
 }
   printf("Sebelum ditukar\n");

    for ( int i = 0 ; i < 10; i ++){
    printf("%c", a[i]);}

    for ( int i = 0 ; i < 11; i ++){
    printf("%c", b[i]);}

    printf("\n\n");

printf("\n");
tukar(a,b);

return 0;
}
