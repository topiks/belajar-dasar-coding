#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t;
    scanf("%d", &t);

 int a[t];


int i;
    for ( int i = 0; i < t; i ++){
        scanf("%d", &a[i]);
    }
 int temp = a[0];
 int sum = 0;
    for ( int i = 1; i < t; i ++){
        if ( temp < a[i]){
            temp = a[i];
            sum++;
        }
        }
int k = a[0];
int hum = 0;
for ( int i = 1; i < t; i ++){
    if ( k > a[i]){
        k = a[i];
        hum++;
    }

}
    printf("%d %d", sum, hum );

    return 0;
}
