#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[4]={1,2,3,4};
int i, j;
/*
i = t[0];
t[0] = t[3];
t[3] = i;

j= t[1];
t[1] = t[2];
t[2] = j;

printf("%d %d %d %d", t[0], t[1], t[2], t[3]);
*/
int y;
for( int i = 0; i < 4; i++)
for ( int j = 3; j >= 0; j--)

y;
y = t[i];
t[i] = t[j];
t[j] = y;
if(j==2){break;}
printf("%d %d", t[i, t[j]);






    return 0;
}
