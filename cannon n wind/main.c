#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cp, tp, cs, ws;

    scanf("%f", &cp);
    scanf("%f", &tp);
    scanf("%f", &cs);
    scanf("%f", &ws);

    char p;
    scanf("%s", &p);

    if ( cp == tp ){
        printf("0.000000");
    }

    else  {

        if ( cp < tp ){

            if ( p == 'R'){

            float a = tp - cp;
            float b = cs + ws;
            float c = a/b;
            printf("%f", c);
            }

            else if ( p == 'L'){

                if ( cs > ws){

                float d = tp - cp;
                float e = cs - ws;
                float f = d/e;
                printf("%f", f);
                }

                else if ( cs < ws ){
                printf("impossible");
                }
                }
                }



        else if ( cp > tp ){

                if ( p == 'L'){

                float g = cp - tp;
                float h = cs + ws;
                float i = g/h;
                printf("%f", i);}

                else if ( p == 'R'){

                    if ( cs > ws ){

                    float j = cp - tp;
                    float k = cs - ws;
                    float l = j/k;
                    printf("%f", l);
                    }

                    else if ( cs < ws ){
                    printf("impossible");
                    }
                    }

                    }
    }

    return 0;
}

