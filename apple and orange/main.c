#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s,t,m,n;
    scanf("%d %d", &s, &t);

    scanf("%d", &a);
    scanf("%d", &b);


    scanf("%d", &m);
    scanf("%d", &n);
    int p[m];
    int y[n];
    int k, x;
    int sum = 0;
    int hum = 0;


    for ( int i = 1; i <= m; i ++){
        scanf("%d", &p[i]);
    }

    for ( int i = 1; i <= n; i ++){
        scanf("%d", &y[i]);
    }

    for ( int i = 1; i <= m; i ++){
        k = a + p[i];
        if ( k >= s && k <= t){
            sum++;
        }
    }

    for( int i = 1; i <= n; i ++){
        x = b + y[i];
        if ( x >= s && x <= t ){
            hum++;
        }
    }

    printf("%d\n", sum);
    printf("%d", hum);






    return 0;
}
