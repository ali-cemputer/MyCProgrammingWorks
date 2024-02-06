#include<stdio.h>
int main()
{
	int sayac=0,sayi;
	printf("Bir sayi gir:");
	scanf("%d",&sayi);
	if(sayi<0||sayi==0)
	{
		printf("Yanlis!! Tekrar giriniz:");
		scanf("%d",&sayi);
	}
	printf("Colletz Serisi:");
	while(sayi!=1)
	{
		printf("%d, ",sayi);
		if(sayi%2==0)
		{
			sayi/=2;
		}
		else
		{
			sayi=sayi*3+1;
		}
		sayac++;
	}
	printf("\n Seride %d tane eleman vardýr.",sayac+1);
	return 0;
}
