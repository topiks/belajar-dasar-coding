#include "pergerakan.h"
#include "stdio.h"
pergerakan::pergerakan()
{
    x = 450;
    y = 600;
    s = 180;
}

void pergerakan::perubahansudut ( int vs, int sudut ){


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
                if ( sudut == 0 && s != 360  )
                {
                    printf(" posisi sudut 360\n");
                }
                else if ( sudut != 0 ){
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

                    }}

                }

                else if ( s == sudut )
                printf("\n");}





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
                printf(" posisi sudut %d\n\n\n", s);}
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
                printf("\n");

            }
}

void pergerakan::maju ( int vmaju, int vs, int sudut ){


perubahansudut(vs, sudut);

    if ( vmaju > 0 ){

        if ( sudut == 0 || sudut == 360 ){

             while ( x < 900){
                if ( x + vmaju > 900 )
                break;
                x = x + vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                }

        if ( sudut == 45 ){

            while ( x < 900){
                if ( x + vmaju > 900 )
                break;
                x = x + vmaju;
                y = y + vmaju;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                }

         if ( sudut == 90){

            while ( y < 1200 ){
                if ( y + vmaju > 1200 )
                break;
                y = y + vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( y != 1200 ){
                y = 1200;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                }

        if ( sudut == 135 ){

            while ( x > 0 ){
                if ( x - vmaju < 0 )
                break;
                x = x - vmaju;
                y = y + vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                }

        if ( sudut == 180){

              while ( x > 0 ){
                if ( x - vmaju < 0 )
                break;
                x = x - vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 225 ){

            while ( x > 0 ){
                if ( x - vmaju < 0 )
                break;
                x = x - vmaju;
                y = y - vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 270 ){

         while ( y > 0 ){
                if ( y - vmaju < 0 )
                break;
                y = y - vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( y != 0 ){
                y = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 315 ){

            while ( x < 900 ){
                if ( x + vmaju > 900 )
                break;
                x = x + vmaju;
                y = y - vmaju;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}}

    else if ( vmaju == 0){
        printf(" ");
    }}

void pergerakan::mundur( int vmundur, int vs, int sudut ){
perubahansudut(vs, sudut);

if ( vmundur > 0 ){

        if ( sudut == 0 || sudut == 360){

             while ( x > 0){
                if ( x - vmundur < 0 )
                break;
                x = x - vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                }

        if ( sudut == 45 ){

            while ( x > 0){
                if ( x - vmundur < 0 )
                break;
                x = x - vmundur;
                y = y - vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 90){

            while ( y > 0 ){
                if ( y - vmundur < 0 )
                break;
                y = y - vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( y != 0 ){
                y = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                }

        if ( sudut == 135 ){

            while ( x <  900){
                if ( x + vmundur > 900 )
                break;
                x = x + vmundur;
                y = y - vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                }

        if ( sudut == 180){

            while ( x < 900 ){
                if ( x + vmundur > 900 )
                break;
                x = x + vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 225 ){

            while ( x < 900 ){
                if ( x + vmundur > 900 )
                break;
                x = x + vmundur;
                y = y + vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut== 270 ){

            while ( y < 1200 ){
                if ( y + vmundur > 1200 )
                break;
                y = y + vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( y != 1200 ){
                y = 1200;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 315 ){

            while ( x > 0 ){
                if ( x - vmundur < 0 )
                break;
                x = x - vmundur;
                y = y + vmundur;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}}

    else if ( vmundur == 0 ){
        printf(" ");
    }
                }

void pergerakan::kanan( int vkanan, int vs ,int sudut ){

perubahansudut(vs, sudut);

if ( vkanan > 0 ){

        if ( sudut == 0 || sudut == 360){

             while ( y > 0){
                if ( y - vkanan < 0 )
                break;
                y = y - vkanan;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( y != 0 ){
                y = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                }

        if ( sudut == 45 ){

            while ( x < 900){
                if ( x + vkanan > 900 )
                break;
                x = x + vkanan;
                y = y - vkanan;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 90){

            while ( x < 900 ){
                if ( x + vkanan > 900 )
                break;
                x = x + vkanan;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                }


        if ( sudut == 135 ){

            while ( x < 900){
                if ( x + vkanan > 900 )
                break;
                x = x + vkanan;
                y = y + vkanan;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 180){

              while ( y < 1200 ){
                if ( y + vkanan > 1200 )
                break;
                y = y + vkanan;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( y != 1200 ){
                y = 1200;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}


        if ( sudut == 225 ){

            while ( x > 0){
                if ( x - vkanan < 0 )
                break;
                x = x - vkanan;
                y = y + vkanan;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 270 ){

         while ( x > 0 ){
                if ( x - vkanan < 0 )
                break;
                x = x - vkanan;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}


        if ( sudut == 315 ){

            while ( x > 0){
                if ( x - vkanan < 0 )
                break;
                x = x - vkanan;
                y = y - vkanan;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

      }


      else if ( vkanan == 0 ){
        printf(" ");
      }

      }

void pergerakan::kiri( int vkiri,int vs ,int sudut ){

perubahansudut(vs, sudut);

if ( vkiri > 0 ){

        if ( sudut == 0 || sudut == 360 ){

             while ( y <1200){
                if ( y + vkiri > 1200 )
                break;
                y = y + vkiri;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( y != 1200 ){
                y = 1200;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

         if ( sudut == 45 ){

            while ( x > 0){
                if ( x - vkiri < 0 )
                break;
                x = x - vkiri;
                y = y + vkiri;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 90){

        while ( x > 0 ){
                if ( x - vkiri < 0 )
                break;
                x = x - vkiri;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 135 ){

            while ( x > 0){
                if ( x - vkiri < 0 )
                break;
                x = x - vkiri;
                y = y - vkiri;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 0 ){
                x = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 180){

              while ( y > 0 ){
                if ( y - vkiri < 0 )
                break;
                y = y - vkiri;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( y != 0 ){
                y = 0;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 225 ){

            while ( x < 900){
                if ( x + vkiri > 900 )
                break;
                x = x + vkiri;
                y = y - vkiri;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 270 ){

         while ( x < 900 ){
                if ( x + vkiri > 900 )
                break;
                x = x + vkiri;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

        if ( sudut == 315 ){

            while ( x < 900){
                if ( x + vkiri > 900 )
                break;
                x = x + vkiri;
                y = y + vkiri;

                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}
                if ( x != 900 ){
                x = 900;
                printf(" posisi X %d\n", x );
                printf(" posisi Y %d\n\n\n\n", y );}}

       }

       else if ( vkiri == 0 ){
        printf(" ");
       }



       }

pergerakan::~pergerakan()
{

}

