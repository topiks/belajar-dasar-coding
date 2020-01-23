#include <iostream>
#include <stdio.h>
using namespace std;

class pergerakan{
public:
    int x ;
    int y ;
    int vx;
    int vy;
    void maju_mundur( int xt ){
        if ( xt > 0){
            for ( x ; x < xt; x++);}
        else if ( xt < 0){
            for ( x ; x > xt; x--);}
        }
    void kanan_kiri( int yt){
        if ( yt > 0 ){
            for ( y = 0; y < yt; y++);}
        else if ( yt < 0 ){
            for ( y = 0; y > yt; y--);}
    };

class perputaran{
public:
    int teta ;
    void berputar_kanan( int tetat ){
    if ( tetat > 0 && tetat <= 180 ){
        for ( teta = 0 ; teta <= tetat ; teta ++);}
    else if ( tetat < 0 && tetat >= -180 ){
        for ( teta = 0 ; teta >= tetat ; teta --);}
    };


int main()
{
    pergerakan p;
    p.maju_mundur(10);
    p.kanan_kiri(9);

    perputaran k;
    k.berputar_kanan(30);

    return 0;
}
