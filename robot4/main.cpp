#include <iostream>
#include <stdio.h>

using namespace std;


class pergerakan{

public :

    void maju( int x, int vx, int sudut ){
    int y = 0;

        while ( x < 900){

            if ( sudut == 0 ){
                x = x + vx;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
            }}

    void mundur( int x, int vx, int sudut ){
    int y = 0;

        while ( x > 0 ){

            if ( sudut == 180){
                x = x - vx;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
        }}

    void kanan( int y, int vy, int sudut ){
    int x = 0;

        while ( y < 1200 ){

            if ( sudut == 270){
                y = y + vy;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
        }}

    void kiri( int y, int vy, int sudut ){
    int x = 0;

        while ( y > 0 ){

            if ( sudut == 90){
                y = y - vy;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
        }}

    void miring_kanan ( float x, float y, float vm, int sudut){
         x = 0;
         y = 0;

        while ( y < 1200){

            if ( sudut == 270 ){

                x = x + vm;
                y = y + 1.3*vm;


            if ( x >= 900){
                break;}

                printf(" posisi X %.1f\n", x );
                printf(" posisi Y %.1f\n\n\n\n", y );}
        }}
        };

int main (){

 pergerakan robot;
/*robot.maju(0, 2, 0);
robot.mundur(900, 2, 180);
robot.kanan(0, 4, 270);
robot.kiri(1200, 2, 90);*/

robot.miring_kanan(0, 0, 5, 270);

    return 0;
}



