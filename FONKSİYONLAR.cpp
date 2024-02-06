/*
#include<stdio.h>
// fonksiyonlara giriþ

int karesini_al(int x); //fonksiyon prototipi  //noktalý virgüle dikkat et!!
int uc_ekle(int x);

//pass by value
int karesini_al(int x) //fonksiyonun kendisi
{
	x*=x;
	return x;
}

int uc_ekle(int x)
{
	x+=3;
	return x;
}

int main()
{
    int sayi=10;
    printf("%d\n",karesini_al(sayi));//karesinial
    
    
    printf("%d\n",uc_ekle(sayi));//uc ekle
    
	return 0;
}
*/





//DEÐER DÖNDÜRMEYENDE PARAMETRESÝZ FONKSÝYON
/*
#include<stdio.h>
void topla1(void);
int main(void)
{
	topla1();
	return 0;
}

void topla1(void)
{
	int x,i,s=0;
	printf("bir sayi gir: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	s+=i;
	printf("toplam: %d",s);
	
}
*/




//DEÐER DÖNDÜRMEYENDE PARAMETRELÝ FONKSÝYON
/*
#include<stdio.h>
void topla2(int a);
int main(void)
{
	int x;
	printf("bir tamsayi giriniz: ");
	scanf("%d",&x);
	topla2(x);
	return 0;
	
}
void topla2(int a)
{
	int i,s=0;
	for(i=1;i<=a;i++)
	{
		s+=i;
	}
	printf("toplam: %d",s);
}
*/




//DEÐER DÖNDÜRENDE PARAMETRESÝZ FONKSÝYON
/*
#include<stdio.h>
int topla3(void);
int main(void)
{
	printf("toplam: %d",topla3());
	return 0;
}
int topla3(void)
{
	int s=0,i,x;
	printf("bir sayi gir: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	s+=i;
	return(s);
}
*/




//DEÐER DÖNDÜRENDE PARAMETRELÝ FONKSÝYON
/*
#include<stdio.h>
int topla(int a);
int main(void)
{
	int x;
	printf("bir sayi giriniz: ");
	scanf("%d",&x);
	printf("toplam: %d",topla(x));
	return 0;
}
int topla(int a)
{
	int i,s=0;
	for(i=1;i<=a;i++)
	s+=i;
	return(s);
}
*/




/*
#include <stdio.h>//Basamaklar toplamýný hesaplar.
int basamak(int a);
int main(void)
{
	int x;
	printf("sayi gir: ");
	scanf("%d",&x);
	printf("Toplam %d",basamak(x));
	return 0;
}

int basamak(int a)
{
	int top=0,b;
	while(a)
	{
		b=a%10;
		top+=b;
		a/=10;
	}
	return(top);
}






/*
#include <stdio.h>//FARKLI FONKSÝYONLARI HESAPLAR. KONU.204.11
double f1(int a); //Fonksiyon prototipi
int f2(int b); //Fonksiyon prototipi
int f3(int c); //Fonksiyon prototipi

int main(void) //Main Fonksiyonu
{
	int n;
	printf("n sayisi giriniz:");
	scanf("%d",&n);
	if(0<n&&n<=10)//f3()fonksiyonu çaðýrma
	{
	printf("sonuc: %d",f3(n));
    }
	if(10<n&&n<30)//f2()fonksiyonu çaðýrma
	{
	printf("sonuc: %d",f2(n));
    }
	if(n>=30)//f1fonksiyonu çaðýrma
	{
	printf("sonuc:%lf",f1(n));
    }
	
	return(0);
}

double f1(int a)
{
	int i;
	double sonuc=0.0;
	for(i=1;i<=2*a+1;i+=2)
	sonuc+=1.0/i;
	return(sonuc);
}

int f2(int b)
{
	int i,sonuc=0;
	for(i=2;i<=2*abs(b);i+=2)
	sonuc+=i;
	return(sonuc);
}

int f3(int c)
{
	int i,sonuc=1;
	for(i=1;i<=c;i++)
	sonuc*=i;
	return(sonuc);
}
*/





/*
#include<stdio.h>//1 ile 100 arasýndaki asal sayýlarý bastýrýr.
int asal(int a);//Konu.204.12
int main(void)
{
	int num;
	for(num=2;num<=100;num++)
	{
		
		if(asal(num)==1)
		printf("%4d",num);
	}
	return 0;
}
int asal(int a)
{
	int i=2;
	while(i<a)
	{
		if(a%i==0)
		{
		return(0);
	    }
		i++;
	}
	return(1);
}
*/





/*
#include <stdio.h>//Dört Basamaklý abcd=pow(ab+bc,2) eþitliðini kontrol eder.
int ilk(int a);//Konu.204.13
int son(int b);
int main(void)
{
	int sayi;
	printf(" 4 basamakli sayi giriniz: ");
	scanf("%d",&sayi);
	if(sayi==(pow((ilk(sayi)+son(sayi)),2)))
	printf("%d saglar.",sayi);
	else
	printf("%d saglamiyor",sayi);
	return 0;
}

int ilk(int a)
{
	return(a/100);
}

int son(int b)
{
	return(b-(b/100)*100);
}
*/





/*
#include <stdio.h>//Celcius--Fahrenheit dönüþümü yapar.
int celcius(void);
int fahrenheit(void);
int main(void)
{
	char secim;
	printf("Fahrenheit-->Celcius icin C/c\n");
	printf("Celcius-->Fahrenheit icin F/f\n");
	scanf(" %c",&secim);
	if(secim=='F'||secim=='f')
	{
		printf("fahrenheit degeri: %d",celcius());
	}
	if(secim=='C'||secim=='c')
	{
		printf("celcius degeri:%d",fahrenheit());
	}
	return 0;
}
int celcius(void)
{
	int cel,fah;
	printf("Celcius degerini giriniz: ");
	scanf("%d",&cel);
	fah=9/5*(cel+32);
	return(fah);
}

int fahrenheit(void)
{
	int fah,cel;
	printf("Fahrenheit degerini giriniz:");
	scanf("%d",&fah);
	cel=5/9*(fah-32);
	return(cel);
}
*/





/*
#include <stdio.h>//Yukarýdaki sorunun aynýsý.
void hesap(char secim);
int main(void)
{
	char sec;
	printf("Fahrenheit-->celcius icin (C/c)\n");
	printf("Celcius-->Fahrenheit ivin(F/f)\n");
	printf("seciminizi giriniz: ");
	scanf("%ch",&sec);
	hesap(sec);
	return 0;
}
void hesap(char secim)
{
	int deger,fah,cel;
	float sonucc,sonucf;
	if((secim=='C')||(secim=='c'))
	{
		printf("Fahrenheit degerini giriniz: ");
		scanf("%d",&fah);
		sonucc=5.0/9*(fah-32);
		printf("celcius degeri: %f ",sonucc);
	}
	if((secim=='F')||(secim=='f'))
	{
		printf("Celcius degerini giriniz: ");
		scanf("%d",&cel);
		sonucf=9.0/5*(cel)+32;
		printf("fahrenheit degeri: %f ",sonucf);
	}
}
*/






/*
#include <stdio.h>//Basamak hesabý yapar.
int bas(int a);
int main(void)
{
	int sayi;
	printf("sayi girin:");
	scanf("%d",&sayi);
	while(sayi>0)
	{
    printf("%d basamaklidir.\n",bas(sayi));
    	printf("sayiyi gir:");
	scanf("%d",&sayi);
    }
    printf("bitti");
    return 0;
}

int bas(int a)
{
	int hane=0;
	while(a>0)
	{
		a=a/10;
		hane++;
	}
	return(hane);
}
*/





/*
#include<stdio.h>//Konu.164.18
int top(int a);
int fakt(int b);
int main(void)
{
	int n;
	char cevap,enter;
	do
	{
		printf("n degerini gir: ");
		scanf("%d",&n);
		scanf("%c",&enter);
		if(n>=10)
		{
			printf("g(n)=%d\n",top(n));
		}
		else if((0<=n)&&(n<=9))
		{
			printf("g(n)=%d\n",fakt(n));
		}
		else
		printf("hata!!!\n");
		printf("yeni deger girecekmisiniz?");
		scanf("%ch",&cevap);
	}while(cevap=='e');
	printf("program sonu...");
	
}

int top(int a)
{
	int top=0,i;
	for(i=1;i<=a;i++)
	{
		top+=i;
	}
	return(top);
}

int fakt(int b)
{
	int fakt=1,i;
	for(i=1;i<=b;i++)
	fakt*=i;
	return(fakt);
}
*/





/*
#include <stdio.h>//Kare ve daire alaný hesaplar.
#define PI 3.14
int menu(void);
void kare(void);
int daire(int r);
int main(void)
{
	int x,y;
	do
	{
		x=menu();
		if(x==1)
		kare();
		else if(x==2)
		{
			printf("daire yaricapi giriniz: ");
			scanf("%d",&y);
			daire(y);
		}
	}while(x!=3)
	printf("Dur");
	return 0;
}

int menu(void)
{
	int tercih;
	printf("bir sayi gir: (kare:1, daire:2, dur:3)");
	scanf("%d",&tercih);
	return(tercih);
}

void kare(void)
{
	int uzunluk,alan;
	printf("kare uzunlugunu gir: ");
	scanf("%d",&uzunluk);
	alan=uzunluk*uzunluk;
	printf("kare alaný:%d",alan);
}

int daire(int r)
{
	int alan;
	alan=PI*r*r;
	printf("Daire alaný: %d",alan);
	return(alan);
}
*/




/*
#include <stdio.h>//Kombinasyon hesabý yapar.
int faktoriyel(int k);
int kombinasyon(int n,int r);
int main(void)
{
	int k,s;
	printf("iki tamsayi giriniz: ");
	scanf("%d%d",&k,&s);
	printf("kombinasyon:%d",kombinasyon(k,s));
	return 0;
}

int faktoriyel(int k)
{
	int i,s=1;
	for(i=1;i<=k;i++)
	s*=i;
	return s;
}
int kombinasyon(int n,int r)
{
	int s;
	s=faktoriyel(n)/(faktoriyel(r)*foktoriyel(n-r));
	return (s);
}
*/






















































































































































































































































































































































