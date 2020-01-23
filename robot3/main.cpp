#include <iostream>
#include <stdio.h>

using namespace std;

class pergerakan{
public:

    void maju ( int vmaju, int vs, int ss ){

    int s = 90;
    int sudut = ss;


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
                    s = s -360;
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



    void mundur( int vmundur, int vs, int ss ){

         int s = 90;
         int sudut = ss;

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
                    s = s -360;
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



        if ( sudut == 0 ){
        int x = 900;
        int y = 0;
             while ( x > 0){
                x = x - vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 45 ){
        int x = 900;
        int y = 1200;
            while ( x < 900){
                x = x - vmundur;
                y = y - vmundur;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 90){
        int x = 0;
        int y = 0;
        while ( y < 1200 ){
                y = y + vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 135 ){
        int x = 0;
        int y = 1200;
        while ( x <  900){
                x = x + vmundur;
                y = y - vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 180){
        int x = 0;
        int y = 0;
              while ( x < 900 ){
                x = x + vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 225 ){
        int x = 0;
        int y = 0;
            while ( x < 900 ){
                x = x + vmundur;
                y = y + vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 270 ){
        int x = 0;
        int y = 1200;
         while ( y > 0 ){
                y = y - vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 315 ){
        int x = 900;
        int y = 0;
            while ( x > 0 ){
                x = x - vmundur;
                y = y + vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}}



    void kanan( int vkanan, int vs, int ss ){

         int s = 90;
         int sudut = ss;

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
                    s = s -360;
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



        if ( sudut == 0 ){
        int x = 0;
        int y = 0;
             while ( y < 1200){
                y = y + vkanan;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 45 ){
        int x = 0;
        int y = 1200;
            while ( x < 900){
                x = x + vkanan;
                y = y - vkanan;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 90){
        int x = 0;
        int y = 0;
        while ( x < 900 ){
                x = x + vkanan;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}


        if ( sudut == 135 ){
        int x = 0;
        int y = 0;
            while ( x < 900){
                x = x + vkanan;
                y = y + vkanan;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 180){
        int x = 0;
        int y = 1200;
              while ( y > 0 ){
                y = y - vkanan;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}


        if ( sudut == 225 ){
        int x = 900;
        int y = 0;
            while ( x > 0){
                x = x - vkanan;
                y = y + vkanan;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 270 ){
        int x = 900;
        int y = 0;
         while ( x > 0 ){
                x = x - vkanan;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}


        if ( sudut == 315 ){
        int x = 900;
        int y = 1200;
            while ( x < 900){
                x = x - vkanan;
                y = y - vkanan;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

      }



    void kiri( int vkiri, int vs, int ss ){

        int sudut = ss;
        int s = 90;

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
                    s = s -360;
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

        if ( sudut == 0 ){
        int x = 0;
        int y = 1200;
             while ( y > 0){
                y = y - vkiri;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

         if ( sudut == 45 ){
        int x = 900;
        int y = 0;
            while ( x > 0){
                x = x - vkiri;
                y = y + vkiri;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 90){
        int x = 900;
        int y = 0;
        while ( x > 0 ){
                x = x - vkiri;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 135 ){
        int x = 900;
        int y = 1200;
            while ( x > 0){
                x = x - vkiri;
                y = y - vkiri;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 180){
        int x = 0;
        int y = 0;
              while ( y < 1200 ){
                y = y + vkiri;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 225 ){
        int x = 0;
        int y = 1200;
            while ( x < 900){
                x = x + vkiri;
                y = y - vkiri;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 270 ){
        int x = 0;
        int y = 0;
         while ( x < 900 ){
                x = x + vkiri;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 315 ){
        int x = 0;
        int y = 0;
            while ( x < 900){
                x = x + vkiri;
                y = y + vkiri;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

       }

};

int main(){
pergerakan robot;
robot.maju(5, 5, 180);
return 0;
}
