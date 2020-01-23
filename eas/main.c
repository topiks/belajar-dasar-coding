#include <stdio.h>
#include <stdlib.h>



    /*int N;
    scanf("%d", &N);

    for ( int i = 1; i <= N; i++ ){
        if ( i % 2 == 0 ){
            printf("-%d ", i);
        }
        else if ( i % 2 != 0 ){
            printf("%d ", i);
        }
    }*/
/*
    int i = 1;
    while ( 1 ){
        printf("%d, ",i);
        i = i + 2;

        if ( i == 23 ){break;}
    }
*/

/*int Nilai[4]={5,1,10,11};

    for ( int i = 1; i <= 4; i ++){
        if ( Nilai[0] < Nilai[i] ){
            Nilai[0] = Nilai[i];
        }
    }
    printf("%d", Nilai[0]);*/

/*
int a = 5;
int *ala = &a;

printf("alamat e %d\n", ala);
printf("nilai e %d", *ala);*/
/*
void swap ( int *x, int *y, int *z){
    int Dum;
    Dum = *x;
    *x = *y;
    *y = *z;
    *z = Dum;

}

int main(){

int a = 3, b = 1, c = 2;
int *p = &a;
int *q = &b;
int *r = &c;

swap(p, q, r);
printf("%d %d %d", *p,*q,*r);
*/

void  apakahbenar ( int tahun ){
    if ( tahun % 400 == 0 ){
        printf("tahun kabisat");
    }

    else if ( tahun % 400 != 0 && tahun % 100 == 0 ){
        printf("bukan tahun kabisat");

    }

    else if ( tahun % 400 != 0 && tahun % 100 != 0 && tahun % 4 == 0){
        printf("tahun kabisat");

    }
    else{
        printf("bukan tahun kabisat");
    }
}

int main (){
int jumlah[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int tgl, bulan;

printf("hari ");
scanf("%d", &tgl);
printf("bulan ");
scanf("%d", &bulan);
int h = 0;

if ( tgl > jumlah[bulan] ){
    printf("ndasmu");
}

else if ( tgl <= jumlah[bulan]){

for ( int i = 1; i < bulan ; i ++){
    h = h + jumlah[i];
}

printf("%d hari", h + tgl );
}





return 0;
}
