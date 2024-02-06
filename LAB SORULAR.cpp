	/*
#include<stdio.h>//1.1
void hesap(int miktar,int *yuzluk,int *ellilik,int *yirmilik,int *onluk,int *beslik);
int main()
{
	int miktar,yuzluk,ellilik,yirmilik,onluk,beslik;
	printf("Miktar giriniz:");
	scanf("%d",&miktar);
	while(miktar%5!=0)
	{
			printf("Miktari besin kati giriniz:");
	        scanf("%d",&miktar);
	}
	hesap(miktar,&yuzluk,&ellilik,&yirmilik,&onluk,&beslik);
	printf("%d yuzluk\n%d ellilik\n%dyirmilik\n%d onluk\n%dbeslik",yuzluk,ellilik,yirmilik,onluk,beslik);
}
void hesap(int miktar,int *yuzluk,int *ellilik,int *yirmilik,int *onluk,int *beslik)
{
	*yuzluk=miktar/100;
	miktar-=*yuzluk*100;
	*ellilik=miktar/50;
	miktar-=*ellilik*50;
	*yirmilik=miktar/20;
	miktar-=*yirmilik*20;
	*onluk=miktar/10;
	miktar-=*onluk*10;
	*beslik=miktar;
}
*/




/*
#include<stdio.h>//1.2
void harfbul(char karakter,int*,int*);
int main()
{
	int kh=0,BH=0,sayac=0;
	char karakter;
	do
	{
		scanf("%c", &karakter);
		sayac++;
		harfbul(karakter,&kh,&BH);
	}while(karakter != '.');
	printf("Karakter sayisi:%d\nkucukharf sayisi:%d\nbuyukkarakter sayisi:%d",sayac,kh,BH);
	return 0;
}
void harfbul(char karakter,int* kh,int* BH)
{
	if('A'<=karakter&&karakter<='Z')
	(*BH)++;
	if('a'<=karakter&&karakter<='z')
	(*kh)++;
}
*/





/*
#include<stdio.h>//2.1
void hesap(int s1,int s2,int *ort);
int main()
{
	int gec,s1,s2,ort;
	printf("iki sayi giriniz:");
	scanf("%d%d",&s1,&s2);
	if(s1>s2)
	{
		gec=s1;
		s1=s2;
		s2=gec;
	}
	hesap(s1,s2,&ort);
	printf("%d ile %d arasindaki cift sayilarin ortalamasi:%d",s1,s2,ort);
	return 0;
}
void hesap(int s1,int s2,int *ort)
{
	int sayac=0,top=0;
	
	for(int i=s1;i<s2;i++)
	{
		if(i%2==0)
		{
			top+=i;
			sayac++;
		}
	}
	*ort=top/sayac;
}
*/







/*
#include<stdio.h>//3.1
int main()
{
	int n,diz[100],i;
	printf("n giriniz: ");
	scanf("%d",&n);
	printf("Dizi elemanlarini giriniz:");
	for(i=0;i<n;i++)
		scanf("%d",&diz[i]);
		printf("Cift sayilar:\t");
	for(i=0;i<n;i++)
		if(diz[i]%2==0)
		printf("%3d",diz[i]);
	printf("\n");
	printf("Tek sayilar:\t");
	for(i=0;i<n;i++)
	if(diz[i]%2==1)
	printf("%3d",diz[i]);		
}
*/








/*
#include<stdio.h>//3.2
int main()
{
	int dizno[100],diznot[100],mevcut,i,no,nott,minno,maxno,minnot,maxnot;
	printf("mevcudu giriniz: ");
	scanf("%d",&mevcut);
	for(i=0;i<mevcut;i++)
	{
		printf("ogrenci no ve notunu giriniz: ");
		scanf("%d%d",&dizno[i],&diznot[i]);
		if(i==0)
		{
			maxno=dizno[i];
			minno=dizno[i];
			maxnot=diznot[i];
			minnot=diznot[i];
		}
		if(diznot[i]>maxnot)
		{
			maxnot=diznot[i];
			maxno=dizno[i];
			
		}
		if(diznot[i]<minnot)
		{
			minnot=diznot[i];
			minno=dizno[i];
			
		}
	}
	printf("***SONUCLAR***\n");
	printf("%d nolu ogrenci en yuksek notu (%d) almistir.\n",maxno,maxnot);
	printf("%d nolu ogrenci en dusuk notu (%d) almistir.",minno,minnot);
}
*/






/*
#include<stdio.h>//4.1.a
void f(int n,int matris[][10],int yeni[],int *k);
int main()
{
	int n,i,j,k,yeni[50],matris[10][10];
	printf("Matris boyutunu giriniz: ");
	scanf("%d",&n);
	printf("Matris elemanlarini giriniz: ");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&matris[i][j]);
	f(n,matris,yeni,&k);
	printf("yeni dizi: ");
	for(i=0;i<k;i++)
	printf("%3d",yeni[i]);
}
void f(int n,int matris[][10],int yeni[],int *k)
{
	int i,j,m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(matris[i][j]%2==1)
			{
				yeni[m++]=matris[i][j];
			}
		}
	}
	*k=m;
}
*/




/*
#include<stdio.h>
#define M 2
#define N 3
#define P 2
int main(void)
{
	int a[10][10],b[10][10],c[10][10],i,j;
	printf("Birinci matris elemanlarini giriniz:\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("ikinci matris elemanlarini giriniz:\n ");
	for(i=0;i<N;i++)
	{
		for(j=0;j<P;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("a Matrisi:\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("\nb Matrisi:\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<P;j++)
		{
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
}
*/







/*
#include<stdio.h>//5.1
#include<string.h>
int main()
{
	char cumle[100],kelime[30],*bul;
	int kc,kk;
	
	printf("Bir cumle giriniz:");
	gets(cumle);
	kc=strlen(cumle);
	
	printf("Bir kelime giriniz: ");
	gets(kelime);
	kk=strlen(kelime);
	
	bul=strstr(cumle,kelime);
	
	while(bul!=NULL)
	{
		if(*(bul+kk)==' ')
		strcpy(bul,bul+kk+1);
		else
		strcpy(bul,bul+kk);
	bul=strstr(cumle,kelime);	
	}
	printf("%s\n",cumle);
	return 0;
}
*/







/*
#include<stdio.h>//6.1
#include<string.h>
#include<ctype.h>
void degis(char cumle[],char yeni[]);
int main()
{
	char cumle[100],yeni[100];
	printf("Bir cumle giriniz: ");
	gets(cumle);
	degis(cumle,yeni);
	printf("Cikti Cumlesi: %s",yeni);
	return 0;
}
void degis(char cumle[100],char yeni[100])
{
	int i;
	for(i=0;cumle[i]!='\0';i++)
	{
		if(i==0)
		cumle[i]=toupper(cumle[i]);
		if(cumle[i]==' ')
		cumle[i+1]=toupper(cumle[i+1]);
	}
	strcpy(yeni,cumle);
}
*/






/*
#include<stdio.h>//6.2
#include<string.h>
#include<ctype.h>
void sirala(char cumles[][50]);
int main()
{
	char cumles[10][50];
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d. dizgiyi giriniz: ",i+1);
		scanf("%s",cumles[i]);
	}
	sirala(cumles);
	for(i=0;i<10;i++)
	printf("%s\n",cumles[i]);
}
void sirala(char cumles[][50])
{
	int i,j;
	char gec[50];
	for(j=1;j<10;j++)
	{
	    for(i=0;i<10-j;i++)
	    {
		    if(strcmp(cumles[i],cumles[i+1])>0)
		    {
		    	
			    strcpy(gec,cumles[i]);
				strcpy(cumles[i],cumles[i+1]);
				strcpy(cumles[i+1],gec);
			}
		}
    }
}
*/





/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void duzen1(char num[30],char yeninum[30]);
void duzen2(char adsoyad[50],char yeniadsoyad[50]);

int main()
{
	char num[100],adsoyad[50],yeninum[100],yeniadsoyad[50];
	printf("Ogrenci numaranizi giriniz: ");
	gets(num);
	printf("ad,soyad,dogum yerini giriniz:");
	gets(adsoyad);
	printf("%s %s\n",num,adsoyad);
	duzen1(num,yeninum);
	duzen2(adsoyad,yeniadsoyad);
	strcat(yeninum,yeniadsoyad);
	printf("Son Hali: %s",yeninum);
	
}
void duzen1(char num[100],char yeninum[100])
{
	int i,j=0;
	for(i=0;i<strlen(num);i++)
	{
		if(isdigit(num[i])!=0)
		{
			yeninum[j++]=num[i];
		}
	}
	yeninum[j]=' ';
	yeninum[j+1]='\0';
}
void duzen2(char adsoyad[50],char yeniadsoyad[50])
{
	int i,j=0;
	for(i=0;i<strlen(adsoyad);i++)
	{
		if(i==0)
		adsoyad[i]=toupper(adsoyad[i]);
		if(adsoyad[i]==' ')
		adsoyad[i+1]=toupper(adsoyad[i+1]);
	}
	
	for(i=0;i<strlen(adsoyad);i++)
	{
		if(isspace(adsoyad[i])==0)
		{
			yeniadsoyad[j++]=adsoyad[i];
		}
		
	}
	yeniadsoyad[j]='\0';
}
*/








/*
#include<stdio.h>//7.1
#include<string.h>
struct hava
{
	int yuksek,dusuk;
	char isim[20];
}sehir[5];
int main()
{
	int fark=0,i,x,f;
	char enter;
	for(i=0;i<5;i++)
	{
		printf("%d. Sehir bilgileri:",i+1);
		gets(sehir[i].isim);
		printf("%s sehrinin en yuksek ve en dusuk sicaklik degerleri:",sehir[i].isim);
		scanf("%d%d",&sehir[i].yuksek,&sehir[i].dusuk);
		scanf("%c",&enter);
		x=sehir[i].yuksek-sehir[i].dusuk;
		if(x>fark)
		{
			fark=x;
			f=i;
		}
	}
	printf("Sicaklik farki %d derece ile en fazla olan sehir:%s",fark,sehir[f].isim);
	return 0;
}
*/












/*
#include<stdio.h>//7.2 Fonksiyonsuz hali 
#include<string.h>
struct paten
{
	char adsoyad[30];
	int degerpuan[10];
	float perpuan;
};
int main()
{
	struct paten yarismaci;
	int i,yuksek=0,dusuk=6,top=0;
	printf("Yarismaci adini giriniz:");
	gets(yarismaci.adsoyad);
	printf("Yarismaci degerlenirme puanlari:");
	for(i=0;i<10;i++)
	{
		printf("%d. Hakem puani:",i+1);
		scanf("%d",&yarismaci.degerpuan[i]);
		if(yarismaci.degerpuan[i]>yuksek)
		yuksek=yarismaci.degerpuan[i];
		if(yarismaci.degerpuan[i]<dusuk)
		dusuk=yarismaci.degerpuan[i];
	}
	for(i=0;i<10;i++)
	if(yarismaci.degerpuan[i]!=yuksek&&yarismaci.degerpuan[i]!=dusuk)
	top+=yarismaci.degerpuan[i];
	yarismaci.perpuan=top*1.0/8.0;
	printf("Yarismacinin performans puani=%f",yarismaci.perpuan);
	return 0;
}
*/







/*
#include<stdio.h>//7.2
#include<string.h>
struct paten
{
	char adsoyad[30];
	int dp[10];
	float perfpuan;
};
struct paten hesapla(struct paten yarismaci);
int main()
{
	struct paten yarismaci;
	int i;
	printf("Yarismacinin ad soyadi:");
	gets(yarismaci.adsoyad);
	printf("Yarismacinin degerlendirme puanlari:\n");
	for(i=0;i<10;i++)
	{
		printf("%d. Hakem Puani:",i+1);
		scanf("%d",&yarismaci.dp[i]);
	}
	yarismaci=hesapla(yarismaci);
	printf("Yarismacinin performans puani=%f",yarismaci.perfpuan);
	return 0;
}
struct paten hesapla(struct paten yarismaci)
{
	int i,top=0,dusuk=6,yuksek=0;
	for(i=0;i<10;i++)
	{
		if(yarismaci.dp[i]<dusuk)
		dusuk=yarismaci.dp[i];
		if(yarismaci.dp[i]>yuksek)
		yuksek=yarismaci.dp[i];
		top+=yarismaci.dp[i];
	}
	top-=dusuk+yuksek;
	yarismaci.perfpuan=top*1.0/8;
	return (yarismaci);
}
*/










































