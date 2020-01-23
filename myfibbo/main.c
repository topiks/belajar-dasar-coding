#include <stdio.h>

int i, n, t1 = 1, t2 = 1, nextTerm, fibbo;
void fibonacci( int x ){
for (i = 0; i < x-1; ++i)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
fibbo = t1;
}

int main()
{


scanf("%d", &n);
fibonacci( n );
printf("Fibonacci ke %d adalah %d ", n, fibbo);

    return 0;
}
