#include <iostream>
#include <stdio.h>

using namespace std;
int s = 90;

void perubahansudut ( int vs, int sudut ){


        if ( vs > 0){

            if ( s < sudut ){
                while ( s <= sudut ){
                    if ( s + vs  > sudut )
                    break;
                    s = s + vs;
                    printf(" posisi sudut %d \n\n\n", s);
                    }

                    if ( s != sudut ){
                    s = sudut;
                    printf(" posisi sudut %d \n\n\n", s);}

                    }

            else if( s > sudut ){

                while ( s <= 360){
                    if ( s + vs  > 360 )
                    break;
                    s = s + vs;
                    printf(" posisi sudut %d \n\n\n ", s);
                }

                int p = 360 - s;
                s = 0 +  vs - p;

                printf(" posisi sudut %d\n\n\n", s);

                    while ( s < sudut ){
                    if ( s + vs > sudut )
                    break;
                    if ( s == sudut )
                        break;
                s = s + vs;
                printf(" posisi sudut %d \n\n\n", s);

               }

                    if ( s != sudut ){
                    s = sudut;
                    printf(" posisi sudut %d\n\n\n", s );

                    }

                }

            else if ( s == sudut )
                printf("jancok\n");}





        if ( vs < 0){

            if ( s > sudut ){

                while ( s > sudut ){

                if ( s + vs < sudut)
                break;

                    s = s + vs;
                    printf(" posiisi sudut %d\n\n\n", s);
            }

            if ( s != sudut ){
                s = sudut;
                printf(" asss posisi sudut %d\n\n\n", s);}
            else if ( s == sudut ){
                printf("\n");}
            }

        else if ( s < sudut ){
            while ( s > 0){
                if ( s + vs < 0)
                break;

                s = s + vs;
                printf(" posisi sudut %d\n\n\n", s);
            }

            int g = s;
            s = 360 + ( vs + g );
            printf(" posisi sudut %d\n\n\n", s);


            while ( s > sudut){

            if ( s + vs < sudut )
            break;
            s = s + vs;
            printf(" posisi sudut %d\n\n\n", s);

            }
            if ( s != sudut)
                printf(" posisi sudut %d\n\n\n", s);
            else{}
            }


            else if ( s == sudut )
                printf("jancok\n");

            }


            }





int main()
{
perubahansudut(5,0);
perubahansudut(6,0);








    return 0;
}
