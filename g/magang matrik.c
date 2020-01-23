#include <stdio.h>

int main(){

int a[2][2];
int b[2][2];
int c[2][2];

for ( int i = 0; i < 2; i ++){
    for ( int j = 0; j < 2; j ++){
        scanf("%d", &a[i][j]);
    }
}
printf("\n");
for ( int i = 0; i < 2; i ++){
    for ( int j = 0; j < 2; j ++){
        scanf("%d", &b[i][j]);
    }
}
printf("\n");
int q = a[0][0]*b[0][0];
int w = a[0][1]*b[1][0];
int s = q+w;

int u =  a[0][0]*b[0][1];
int h = a[0][1]*b[1][1];
int z = u+h;

int g = a[1][0]*b[0][0];
int d = a[1][1]*b[1][0];
int v = g+d;

int r = a[1][0]*b[0][1];
int e =  a[1][1]* b[1][1];
int y = r+e;
printf("%d*%d + %d*%d = %d  %d*%d + %d*%d = %d \n", a[0][0], b[0][0], a[0][1], b[1][0], s, a[0][0], b[0][1], a[0][1], b[1][1],z);
printf("%d*%d + %d*%d = %d  %d*%d + %d*%d = %d", a[1][0], b[0][0], a[1][1], b[1][0], v, a[1][0], b[0][1], a[1][1],b[1][1], y);



return 0;
}
