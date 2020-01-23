#include <iostream>
#include <stdio.h>

using namespace std;


class pergerakan{
public:

    void maju_lurus( float putaranakhir ){

        int putaranroda1 = 0;
        int putaranroda3 = 0;
        int putaranroda2 = putaranakhir;
        int putaranroda4 = putaranakhir;

        for ( int i = 0; i < putaranakhir; i++ ){

        putaranroda1++;
        putaranroda3++;}

        for ( int i = putaranakhir; i > 0; i-- ){
        int putaranroda2 = putaranakhir;
        int putaranroda4 = putaranakhir;
        }}

    void mundur_lurus( float putaranakhir ){

        int putaranroda1 = putaranakhir;
        int putaranroda2 = 0;
        int putaranroda3 = putaranakhir;
        int putaranroda4 = 0;

        for ( int i = putaranakhir; i > 0; i-- ){
        putaranroda1--;
        putaranroda3--;}

        for ( int i = 0 ; i < putaranakhir ; i++){
        putaranroda2++;
        putaranroda4++;
        }}

    void kanan_lurus ( float putaranakhir ){

        int putaranroda1 = 0;
        int putaranroda2 = 0;
        int putaranroda3 = putaranakhir;
        int putaranroda4 = putaranakhir;

        for ( int i = 0 ; i < putaranakhir ; i++){
        putaranroda1++;
        putaranroda2++;}

        for ( int i = putaranakhir; i > 0; i--){

        putaranroda3--;
        putaranroda4--;}
        }

     void kiri_lurus ( float putaranakhir ){

        int putaranroda1 = putaranakhir;
        int putaranroda2 = putaranakhir;
        int putaranroda3 = 0;
        int putaranroda4 = 0;

        for ( int i = 0 ; i < putaranakhir ; i++){
        putaranroda3++;
        putaranroda4++;}

        for ( int i = putaranakhir; i > 0; i--){
        putaranroda1--;
        putaranroda2--;}
        }

    void putar_kanan( float putaranakhir ){

        int putaranroda1 = 0;
        int putaranroda2 = 0;
        int putaranroda3 = 0;
        int putaranroda4 = 0;

        for ( int i = 0 ; i < putaranakhir ; i++ ){

        putaranroda1++;
        putaranroda2++;
        putaranroda3++;
        putaranroda4++;

        }}

    void putar_kiri( float putaranakhir ){

        int putaranroda1 = putaranakhir;
        int putaranroda2 = putaranakhir;
        int putaranroda3 = putaranakhir;
        int putaranroda4 = putaranakhir;

        for ( int i = putaranakhir ; i > 0 ; i-- ){

        putaranroda1--;
        putaranroda2--;
        putaranroda3--;
        putaranroda4--;

        }}

    };


int main()
{
    pergerakan robot;
    robot.maju_lurus(40);
    robot.mundur_lurus(30);
    robot.kanan_lurus(80);
    robot.kiri_lurus(70);
    robot.putar_kanan(0.815);

    return 0;
}
