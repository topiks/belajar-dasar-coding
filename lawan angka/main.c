#include <stdio.h>
void LawanAngka(int x)
{
x = -1*x;
printf("%d", x);
}

int main()
{

int a, b;
printf("~~PROGRAM FUNGSI LAWAN ANGKA~~\nNama : Taufik Hidayat\nNRP : 07111940000094\nKelas : E\n");
printf("a = ");
scanf("%d", &a);
printf("b = ");
scanf("%d", &b);
printf("a' = ");
LawanAngka(a);
printf("\nb' = ");
LawanAngka(b);

return 0;
}


