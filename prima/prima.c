#include<stdio.h>

int main ()
{
	int daftar[1000],prima[500],a,b,c=0,d,banyakbilangan,total=0;
	for (a=0;a<1000;a++)
	daftar[a]=a;
	for (a=2;a<1000;a++)
	{
		for (b=a+a;b<1000;b=b+a)
		daftar[b] = -1;
	}
	for (a=2;a<1000;a++)
	{
		if (daftar[a] != -1)
		{
			prima[c]=daftar[a];
			c++;
		}
	}
	scanf("%d",&banyakbilangan);

	for (a=0;a<banyakbilangan;a++)
	{
		printf("%d ", prima[a]);
	}
	return 0;
}
