//DÝZGÝLER//
/*
#include<stdio.h>//ÝKÝ DÝZGÝYÝ KARÞILAÞTIRIR.(STRCMP)
#include<string.h>
int main()
{
	char dizgi1[100],dizgi2[100];
	printf("Birinici dizgiyi giriniz: ");
	gets(dizgi1);
	printf("ikinci dizgiyi giriniz: ");
	gets(dizgi2);
	if(strcmp(dizgi1,dizgi2)>0)
	printf("%s>%s",dizgi1,dizgi2);
	else if(strcmp(dizgi2,dizgi1)>0)
	printf("%s>%s",dizgi2,dizgi1);
	else
	printf("%s=%s",dizgi1,dizgi2);
	return 0;
}
*/




/*
#include<stdio.h>//GÝRÝLEN DÝZGÝYÝ TERSÝNE ÇEVÝRÝR.
#include<string.h>
int main()
{
	char dizgi1[15], dizgi2[15];
	int i,uz;
	printf("bir dizgi giriniz: ");
	gets(dizgi1);
	uz=strlen(dizgi1);
	for(i=0;i<uz;i++)
	strncpy(&dizgi2[i],&dizgi1[uz-i-1],1);
	printf("%s",dizgi2);
	return 0;
}
*/





/*
#include<stdio.h>//GÝRÝLEN KELÝMENÝN PALÝNDROM OLUP OLMADIÐINI BULUR.
#include<string.h>
int main()
{
	char dizgi1[15];
	int bayrak=1,i,uz;
	printf("bir dizgi giriniz: ");
	gets(dizgi1);
	uz=strlen(dizgi1);
	for(i=0;i<uz&&bayrak==1;i++)
	if(dizgi1[i]!=dizgi1[uz-i-1])
	bayrak=0;
	if(bayrak==1)
	printf("palindromdur");
	else
	printf("palindrom degildir.");
}
*/






/*
#include<stdio.h>//CÜMLEDEKÝ BÜYÜK HARFLERÝ KÜÇÜÐE DÖNÜÞTÜRÜR.
#include<ctype.h>//tolower
#include<string.h>
int main()
{
	char dizgi1[70];
	int i;
	printf("bir cumle giriniz: ");
	gets(dizgi1);
	for(i=0;i<strlen(dizgi1);i++)
	printf("%c", tolower(dizgi1[i]));
	return 0;
}
*/








/*
#include<stdio.h>//SAYILARLA KARIÞIK HARF GÝRÝLEN DÝZGÝDE HARFLERÝ BASTIRIR
#include<ctype.h>//isalpha(a) a harf ise 1 döndürür.
#include<string.h>
int main()
{
	char dizgi[50];
	int i;
	printf("sayilarla karisik harfler giriniz: ");
	gets(dizgi);
	for(i=0;i<strlen(dizgi);i++)
	if(isalpha(dizgi[i]))
	printf("%c", dizgi[i]);
}
*/







/*
#include<stdio.h>//GÝRÝLEN CÜMLEDEKÝ KELÝME SAYISINI BULUR.
#include<string.h>
int main()
{
	char cumle[100];
	int i=0,sayac=0;
	printf("Lutfen bir cumle giriniz: ");
	gets(cumle);
	while(cumle[i])
	{
		if(cumle[i]==32)
		sayac++;
		i++;
	}
	printf("cumlede %d kelime vardir.",sayac+1);
}
*/





/*
#include<stdio.h>//GÝRÝLEN CÜMLENÝN KAÇ KARAKTER OLDUÐUNU BULUR.
#include<string.h>
int main()
{
	char dizgi[100];
	int i,sayac=0;
	printf("bir cumle giriniz: ");
	gets(dizgi);
	while(dizgi[i])
	{
		if(dizgi[i++]!='\0')
		sayac++;
	}
	printf("cumle %d karakterlidir.",sayac);
}
*/






/*
#include<stdio.h>//GÝRÝLEN KELÝMENÝN HARFLERÝYLE ÜÇGEN OLUÞTURUR.
#include<string.h>
#include<ctype.h>
int main()
{
	char kelime[30];
	int i,j;
	printf("bir kelime giriniz:");
	gets(kelime);
	for(i=0;i<strlen(kelime);i++)
	{
	for(j=0;j<=i;j++)
	printf("%2c",kelime[j]);
	printf("\n");
    }
}
*/






/*
#include<stdio.h>//STRLEN FONKSÝYONU KULLANMADAN CÜMLEDEKÝ KARAKTER SAYISINI BULUR.
#include<string.h>
int en(char dizgi2[100]);
int main()
{
	char dizgi1[100];
	printf("bir dizgi giriniz: ");
	gets(dizgi1);
	printf("Girdiginiz cumle %d karakterlidir.",en(dizgi1));
	return 0;
}
int en(char dizgi2[100])
{
	int sayac=0,i=0;
	
	while(dizgi2[i])
	{
		sayac++;
		i++;
	}
	return sayac;
}
*/









/*
#include<stdio.h>//STRCAT FONKSÝYONU KULLANMADAN ÝKÝ DÝZGÝYÝ BÝRLEÞTÝRÝR.
#include<string.h>
void cat(char dizgi1[],char dizgi2[]);
int main()
{
	char dizgi1[10],dizgi2[10];
	printf("Dizgi1 ve Dizgi2 giriniz: ");
	gets(dizgi1);
	gets(dizgi2);
	cat(dizgi1,dizgi2);
	return 0;
}
void cat(char dizgi1[],char dizgi2[])
{
	int i,j,k=0;
	j=strlen(dizgi1);
	for(i=0;i<10;i++)
	{
		dizgi1[j++]=dizgi2[k++];
	}
	printf("%s",dizgi1);	
}
*/






/*
#include<stdio.h>//GÝRÝLEN DÝZGÝDEKÝ KELÝMELERÝN BAÞ HARFLERÝNÝ BASTIRIR.
#include<string.h>
void kisa(char dizgi[100],char kelime[10]);
int main()
{
	char dizgi[100],kelime[10];
	printf("bir dizgi giriniz: ");
	gets(dizgi);
	do
	{
		kisa(dizgi, kelime);
		printf("kisaltma: %s",kelime);
		printf("\nbir dizgi giriniz: ");
		gets(dizgi);
	}while(dizgi[0]!='\0');
	return 0;
}
void kisa(char dizgi[100],char kelime[10])
{
	int i,k=0;
	for(i=0;i<100;i++)
	{
		if(i==0)
		kelime[k++]=dizgi[i];
		if(dizgi[i]== ' ')
		kelime[k++]=dizgi[i+1];
	}
	kelime[k]='\0';	
}
*/








/*
#include<stdio.h>//SORU.141.16
#include<string.h>
#include<ctype.h>
int main()
{
	char matris[5][10],cumle[50];
	int i,j,sayac=0,k;
	for(i=0;i<5;i++)
		for(j=0;j<50;j++)
		matris[i][j]='*';
	printf("Bir cumle giriniz: ");
	gets(cumle);
	i=0;j=0;
	for(k=0;cumle[k]!='\0';k++)
	{
	if(isupper(cumle[k]))
	{
		matris[i][j]=cumle[k];
		sayac++;
		if(i<5)
		i++;
		else
		{
			i=0;
			j++;
		}
	}
   }
	for(i=0;i<5;i++)
	{
		for(j=0;j<10;j++)
		printf("%c",matris[i][j]);
		printf("\n");
	}
}
*/







/*
#include<stdio.h>//SORU.142.17
#include<string.h>
#include<ctype.h>
int main()
{
	char cumle[100];
	int space=0;
	printf("Isim ve notlari giriniz: ");
	gets(cumle);
	printf("Liste:\n");
	for(int i=0;cumle[i]!='\0';i++)
	{
		printf("%c",cumle[i]);
		if(cumle[i]==' ')
		space++;
		if(cumle[i]==' ' && space%2==0)
		{
			printf("\n");
		}
	}
}
*/








/*
#include<stdio.h>//CUMLEDEKÝ KELÝMELERÝN ÝLK HARFLERÝNÝ BÜYÜK YAPAR
#include<string.h>//KONU.292.6
#include<ctype.h>
void fonk(char dizgi[100]);
int main()
{
	char cumle[100];
	printf("Bir dizgi giriniz: ");
	gets(cumle);
	fonk( cumle);
	printf("%s",cumle);
	return 0;
}
void fonk(char dizgi[100])
{
	int i;
	for(i=0;dizgi[i]!='\0';i++)
	{
        if(dizgi[i]==' ')
        dizgi[i+1]=toupper(dizgi[i+1]);
	}
}
*/







/*
#include<stdio.h>//KULLANICIDAN ALINAN ÝSMÝN BAÞ HARFÝNÝ, SOYÝSMÝ OLDUÐU GÝBÝ BASTÝRÝR.
#include<string.h>//KONU.292.8
#include<ctype.h>
int main()
{
	char dizi[20],yeni[15];
	int i,k=0;
	printf("Isim soyisim giriniz: ");
	gets(dizi);
	for(i=0;dizi[i]!='\0';i++)
	{
		if(i==0)
		{
			yeni[k++]=dizi[i];
			yeni[k++]='.';
			yeni[k]=' ';
		}
		if(dizi[i]==' ')
		{
			for(k=3;k<10;k++)
			yeni[k]=dizi[++i];
	    }
	}
	yeni[k]='\0';
	printf("%s",yeni);
}
*/









/*
#include<stdio.h>//ÝSÝM VE NOTLARIN OLDUÐU DÝZÝDE SADECE NOTLARI BASTIRIR.
#include<string.h>//KONU.293.9
#include<ctype.h>,
int main()
{
	int i;
	char dizgi[100];
	printf("Giriniz:");
	gets(dizgi);
	for(i=0;dizgi[i]!='\0';i++)
	{
		if(dizgi[i]==' ')
		{
			printf("%c%c",dizgi[i-2],dizgi[i-1]);
		}
	}
}
*/






/*
#include<stdio.h>//Girilen dizgideki boþluklarý kaldýrýr.
#include<string.h>//konu.293.10
#include<ctype.h>
int main()
{
	char eski[100],yeni[100];
	int i,j=0;
	printf("Bir dizgi giriniz:");
	gets(eski);
	for(i=0;i<strlen(eski);i++)
	{
		if(isspace(eski[i])==0)
		{
			yeni[j++]=eski[i];
		}
	}
	printf("%s",yeni);
}
*/






/*
#include<stdio.h>//292.4
#include<string.h>
#include<ctype.h>
void bul(char isim[],char tekrar[]);
int main()
{
	char isim[10],tekrar[30];
	printf("bir isim giriniz: ");
	gets(isim);
	bul(isim,tekrar);
	printf("tekrarlayan isim: %s",tekrar);
}
void bul(char isim[],char tekrar[])
{
	char yeni[30];
	int i,j,k=0;
	for(i=0;i<strlen(isim);i++)
	{
		for(j=0;j<=i;j++)
		yeni[k++]=isim[j];
	}
	strcpy(tekrar,yeni);
}
*/





/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int bul(char dizgi[]);
int main()
{
	char dizgi[25];
	int sonuc;
	printf("Bir dizgi giriniz: ");
	gets(dizgi);
	sonuc=bul(dizgi);
	if(sonuc==1)
	printf("Buyuk harf sayisi , kucuk harf sayisina esittir.");
	return 0;
}
int bul(char dizgi[25])
{
	int i,sayack=0,sayacB=0;
	for(i=0;i<strlen(dizgi);i++)
	{
		if(isupper(dizgi[i])!=0)
		sayacB++;
		if(islower(dizgi[i])!=0)
		sayack++;
	}
	if(sayacB==sayack)
	return 1;
	else 
	return 0;
}
*/







/*
#include<stdio.h>//kÝMYASAL ELEMENTLERÝN LÝSTESÝNÝ YAPAR.
#include<string.h>
void bul(char elementler[],int *sayac);
int main()
{
	char elementler[200];
	int i,sayac=0;
	printf("Kimyasal elementlerin bir listesini girin:");
	gets(elementler);//Arada virgül olacak þekilde elementler girilir.
	for(i=0;i<200;i++)
	{
		if(elementler[i]==',')
		sayac++;//Virgül sayýsýnýn bir fazlasý bize element sayýsýný verir.
	}
	bul(elementler,&sayac);//dizgiyi ve sayacý fonksiyona göndeririz.
	return 0;
}
void bul(char elementler[200],int *sayac)
{
	int i,j,k=0;
	printf("Listede %d element vardir.\n",*sayac+1);//element sayýsýný bastýrýr.
	for(i=0;i<(*sayac)+1;i++)
	{
		printf("%d. kimyasal element:",i+1);
		for(j=k;elementler[j]!=','&&elementler[j]!='\0';j++)
		{
			printf("%c",elementler[j]);
			k++;//ikinci elemente gectiðinde programýn birinci elementi bastýrmamasýný engeller.
		}
		k=k+1;
		printf("\n");
	}
}
*/





































