#include <iostream>
#include <stdio.h>
using namespace std;

class pergerakan{
public:
    void pergerakans ( int vsudut, int sudut ) {
int s = 90;

        if ( vsudut > 0 ){

            if ( s > sudut ){

                while ( s < 360 ){
                    s = s + vsudut;
                        if ( s <= 360){
                            printf("posisi sudut %d\n\n\n", s);}
                        else;}

                if ( s == 360){s = 0;}
                while ( s < sudut){
                    s = s + vsudut;
                    printf("posisi sudut %d\n\n\n", s);}

             }

             else if ( s < sudut ){
                while ( s < sudut ){
                    s = s + vsudut;
                        if ( s <= sudut ){
                            printf("posisi sudut %d\n\n\n", s);}
                        else{}}}

        }


        if ( vsudut < 0 ){

            if ( s < sudut ){

                while ( s > 0 ){
                    s = s + vsudut;
                        if ( s >= 0){
                            printf("posisi sudut %d\n\n\n", s);}
                        else;}

                if ( s <= 0){s = 360;}

                while ( s > sudut){
                    s = s + vsudut;
                    printf("posisi sudut %d\n\n\n", s);}

}

            else if ( s > sudut ){

                while ( s > sudut ){
                    s = s + vsudut;
                        if ( s >= sudut ){
                            printf("posisi sudut %d\n\n\n", s);}
                        else{}
                }}}}};


int main()
{
pergerakan robot;
robot.pergerakans(-10,180);
    return 0;
}
