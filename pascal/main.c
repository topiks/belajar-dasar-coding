#include <stdio.h>

int faktorial(int n) {

  int z = 1;
  int i = 1;

  while(i<=n) {
    z=z*i;
    i++;
  }

  return z;
}

int main() {
  int a, i, j;
  int k;
  scanf("%d", &a);
char r = '*';
  for (i=0; i<=a; i++) {

    for (j=0; j<=i; j++){

        k = faktorial(i) / (faktorial(j) * faktorial(i - j));
        if ( k % 5 == 0){
            printf("%c ", r);
            continue;

        }printf("%d ", k);

    }

    printf("\n");
  }

  return 0;
}
