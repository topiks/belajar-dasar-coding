#include <iostream>
#include <stdio.h>
using namespace std;

void pergerakan ( int st, int vs){
    int so = 90;
/*
    if ( so < st ){
        while ( so <= st ){
            printf("%d  ", so);
            so = so + vs;}}

    else {
        while ( so <= 360){
            printf("%d  ", so);
            so = so + vs;
            if ( so > 360 ){break;}

        }
        so = so -360;
        while ( so <= st ){
            printf("%d ", so);
            so = so + vs;
        }

    }*/

    if ( vs < 0){

        if ( so > st ){

            while ( so > st ){
            so = so + vs;
            printf("%d\n\n", so);
            if ( so <= st){break;}}}

        else if ( so < st ){
            while ( so > 0){
                printf("%d\n\n", so);
                so = so + vs;
                if ( so <= 0){break;}
            }
            so = 360 - so;
            while ( so >= st){
            printf("%d\n\n", so);
            so = so + vs;
            }}}


}



int main()
{
    pergerakan(160,-5);
    return 0;
}
