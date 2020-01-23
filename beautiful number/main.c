#include <stdio.h>
#include <stdlib.h>



int main()
{
    int datasize;
    scanf( "%d" , &datasize );

    int data[datasize];
    int hasil = 0;

    for( int i=1 ; i <= datasize ; i++){
        data[i] = i;
        hasil = hasil + data[i];
        if(hasil > datasize-1){
            break;
        }
        }
        if( hasil == 1 ){
            printf("bilangan tidak cantik");
        }
        else if( hasil == datasize){
            printf("bilangan cantik");
        }
        else if ( hasil != datasize){
            printf("bilangan tidak cantik");
        }

return 0;
}

