#include <iostream>
#include <stdio.h>
using namespace std;

class persegi{

    public:

    int sisi = 9;

    void luas()
    {
    printf("%d\n", sisi*sisi);}

    void keliling(){
    printf("%d", sisi + sisi);}
    };

int main()
{
    persegi p;
   // scanf("%d", &p.sisi);

    //printf("%d", p.luas(p.sisi));
    p.luas();
    p.keliling();


    return 0;
}
