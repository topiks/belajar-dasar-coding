#include <iostream>

using namespace std;


float temp = 10;
int volt = 0;
int w;


int evolty( int x){
    for ( float i = 0; i < x ; i++ ){
        volt += 2;

    }

    return volt;
}

int baronas( int y ){
    if ( y % 2 == 0 ){
        temp += 4;
    }
    else if ( y % 2 != 0 ){
        temp -= 3.5;
    }

    w = evolty ( temp );
    return w;
    }

int main()
{
    cout << evolty(2) ;
    cout << baronas(2) << endl;



    return 0;
}
