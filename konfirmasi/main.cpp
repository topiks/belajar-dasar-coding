#include <iostream>
#include <stdio.h>

using namespace std;


class pergerakan{

public :

    void maju_lurus( int x, int vmaju, int sdt ){
    int y = 0;
    int sudut = sdt;
        while ( x < 900){

            if ( sudut == 0 ){
                x = x + vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
            }}};


int main()
{
    pergerakan robot;
    robot.maju_lurus( 450, 2, 0 );
    return 0;
}
