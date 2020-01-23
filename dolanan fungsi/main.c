#include <stdio.h>
#include <stdlib.h>

/*int a;
int b;

void input(){

printf("masukkan nilai ");
scanf("%d", &a);
}

void kuadrat(){
input();
b = a*a;}

void prin(){
kuadrat();
printf("%d", b);}


int main()
{
    prin();
    return 0;
}*/



/*void masukkan(char string1[10], char string2[10]){
        scanf("%s", &string1);
        scanf("%s", &string2);
        printf("%s\n", string1);
        printf("%s", string2);
        }



int main (){

char a[10], b[10];

masukkan(a,b);

return 0;
}*/


main()
{
  char A[10];
  char B[11];
  char tukar;
  int i;

  for (i=0; i<10; i++){
    scanf("%c", &A[i]);
  }
  for (i=0; i<11; i++){
    scanf("%c", &B[i]);
  }

  for (i=0; i<10; i++)
  {
   printf("A[%d] = %c\n", i,A[i]);
  }
  printf("\n");

  for (i=0; i<11; i++)
  {
   printf("B[%d] = %c\n", i,B[i]);
  }


  for (i=0; i<11; i++)
  {
  tukar = A[i];
  A[i] = B[i];
  B[i] = tukar;
  }


  printf("Setelah A dan B ditukar : \n\n");


  for (i=0; i<10; i++)
  {
   printf("A[%d] = %c\n", i,A[i]);
  }
  printf("\n");


  for (i=0; i<10; i++)
  {
   printf("B[%d] = %c\n", i,B[i]);
  }


}

