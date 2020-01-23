#include "pergerakan.h"
#include "stdio.h"
pergerakan::pergerakan()
{
    int x = 0;
    int y = 0;
    int s = 0;
}
void pergerakan::berputar ( int vs, int sudut ){
        if ( vs > 0){

            if ( s < sudut ){
                while ( s <= sudut ){
                    printf(" posisi sudut %d \n\n\n", s);
                    s = s + vs;}}


            else {
                while ( s <= 360){
                printf(" posisi sudut %d \n\n\n ", s);
                s = s + vs;
                if ( s > 360 ){break;}}
                    s = s - 360;
                        while ( s <= sudut ){
                        printf(" posisi sudut %d \n\n\n", s);
                        s = s + vs;}}}

        if ( vs < 0){

            if ( s > sudut ){

            while ( s > sudut ){
            s = s + vs;
            printf("%d\n\n", s);
            if ( s <= sudut){break;}}}

            else if ( s < sudut ){
            while ( s > 0){
                printf("%d\n\n", s);
                s = s + vs;
                if ( s <= 0){break;}
            }
            s = 360 - s;
            while ( s >= sudut){
            printf("%d\n\n", s);
            s = s + vs;
            }}}

}

void pergerakan::maju ( int vmaju, int vs, int sudut ){




        if ( sudut == 0 ){
        int x = 0;
        int y = 0;
             while ( x < 900){
                x = x + vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 45 ){
        int x = 0;
        int y = 0;
            while ( x < 900){
                x = x + vmaju;
                y = y + vmaju;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

         if ( sudut == 90){
        int x = 0;
        int y = 1200;
        while ( y > 0 ){
                y = y - vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 135 ){
        int x = 900;
        int y = 0;
            while ( x > 0 && y < 900){
                x = x - vmaju;
                y = y + vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 180){
        int x = 900;
        int y = 0;
              while ( x > 0 ){
                x = x - vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 225 ){
        int x = 900;
        int y = 1200;
            while ( x > 0 ){
                x = x - vmaju;
                y = y - vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 270 ){
        int x = 0;
        int y = 0;
         while ( y < 1200 ){
                y = y + vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 315 ){
        int x = 0;
        int y = 1200;
            while ( x < 900 ){
                x = x + vmaju;
                y = y - vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}}


