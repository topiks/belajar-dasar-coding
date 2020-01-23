#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, c = 0;


for( int i = 1; i <= 10000; i++){
    for(int j = 1; j <= i; j++){
        if(i%j == 0){
            c++;
        }
    }
    if(c == 2)
        printf("%d ", i);
        c = 0;

}
system("pause");
    return 0;
}
