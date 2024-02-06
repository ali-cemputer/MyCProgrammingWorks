/*
#include<stdio.h>//X tane öðrencinin ortalamasýný hesaplar.
#include<stdlib.h>
int main()
{
	int x,i,top=0;
	int *sinifptr;
	float ort;
	printf("Ogrenci sayisini giriniz:");
	scanf("%d",&x);
	sinifptr=(int*) calloc(x,sizeof(int));
	printf("Notlari giriniz:\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&sinifptr[i]);
		top+=sinifptr[i];
	}
	ort=(float)top/i;
	printf("Notlarin ortalamsi:%f",ort);
	free(sinifptr);
	return 0;
}
*/






/*
#include<stdio.h>//Makro ile ucgen çevre hesabý yapar.
#define UCGEN(k1,k2,k3) ((k1)+(k2)+(k3))
int main()
{
	int x1,x2,x3,cevre;
	printf("Ucgen knarlarini giriniz:");
	scanf("%d%d%d",&x1,&x2,&x3);
	cevre=UCGEN(x1,x2,x3);
	printf("Ucgenin cevresi:%d",cevre);
	return 0;
}
*/




/*
#include<stdio.h>//Makro kullanarak girilen sayýnýn tek yada cift oldugunu hesaplar.
#define TC(s1) (s1)%2==1?1:0
int main()
{
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	if(TC(sayi))
	{
		printf("%d sayisi tektir.",sayi);
	}
	else
	printf("%d sayisi cifttir.",sayi);
}
*/




/*
#include<stdio.h>//ÝKÝ DÝZÝDEKÝ SAYILARIN TOPLAMINI ÜÇÜNCÜ DÝZÝYE KAYDERÝR
#include<stdlib.h>
int main()
{
	int i,boyut,*d1,*d2,*d3;
	printf("Dizilerin boyutunu giriniz:");
	scanf("%d",&boyut);
	d1=(int*) calloc(boyut,sizeof(int));
	d2=(int*) calloc(boyut,sizeof(int));
	printf("Birinci dizinin elemanlarini giriniz:");
	for(i=0;i<boyut;i++)
	scanf("%d",&d1[i]);
	printf("Ikinci dizinin elemanlarini giriniz:");
	for(i=0;i<boyut;i++)
	scanf("%d",&d2[i]);
	d3=(int*) calloc(boyut,sizeof(int));
	for(i=0;i<boyut;i++)
	d3[i]=d1[i]+d2[i];
	printf("Iki dizi elemanlari toplami:");
	for(i=0;i<boyut;i++)
	printf("%3d",d3[i]);
	free(d1);
	free(d2);
	free(d3);
}
*/






/*
#include<stdio.h>//Soru.201.7
#include<string.h>
#include<math.h>
float poz(int sayi,int *poz);
float neg(int sayi,int *neg);
int main()
{
	FILE *dos=fopen("pozneg.txt","r");
	int n,negsay,pozsay;
	float sonuc;
	while(!feof(dos))
	{
		fscanf(dos,"%d",&n);
		if(n>=0)
		{
			sonuc=poz(n,&pozsay);
			printf("%d. pozitif sayi icin f(%d) = %5.2f\n",pozsay-71,n,sonuc);
		}
		else if(n<0)
		{
			sonuc=neg(n,&negsay);
			printf("%d. negatif sayi icin f(%d) = %5.2f\n",negsay,n,sonuc);
		}
	}
	fclose(dos);
	return 0;
}
float poz(int sayi,int *poz)
{
	*poz+=1;
	int i;
	float sonuc=1;
	for(i=1;i<=sayi;i++)
	sonuc*=i;
	return (sonuc*1.0);
	
}
float neg(int sayi,int *neg)
{
	int i;
	*neg+=1;
	float sonuc;
	for(i=1;i<=abs(sayi);i++)
	sonuc+=1.0/i;
	return (sonuc);
}
*/






/*
#include<stdio.h>//Soru.202.8
#include<string.h>
#include<stdlib.h>
int main()
{
	char *cevap,*yanit,enter;
	int i,j,dogru=0,soru,*no;
	printf("Sinavdaki soru sayisi:");
	scanf("%d",&soru);
	scanf("%c",&enter);
	cevap=(char*) calloc(soru,sizeof(char));
	yanit=(char*) calloc(soru,sizeof(char));
	no=(int*) calloc(10,sizeof(int));
	printf("Dogru cevap anahtari:");
	scanf("%s",cevap);
	for(i=0;i<10;i++)
	{
		dogru=0;
		printf("Ogrenci nosu:");
		scanf("%d",&no[i]);
		scanf("%c",&enter);
		printf("%d nin cevaplari:",no[i]);
		scanf("%s",yanit);
		for(j=0;j<soru;j++)
		if(cevap[j]==yanit[j])
		dogru++;
		printf("%d nin notu: %d\n",no[i],dogru*10);
	}	
}
*/








/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct kisi
{
	char ad[15],sonuc[15];
	int kilo;
	float boy,vki;
}*ptr;
int main()
{
	
	FILE *yaz=fopen("vki.txt","w");
	int n,i,j=0;
	char enter,son[15],isim[15];
	float max=0.0;
	printf("Kac kisi gireceksiniz:");
	scanf("%d",&n);
	scanf("%c",&enter);
	ptr=(kisi*) calloc(n,sizeof(kisi));
	for(i=0;i<n;i++)
	{
		printf("%d. kisinin adini,kilosunu ve boyunu giriniz:",i+1);
		gets((ptr)->ad);
		scanf("%d%f",&ptr->kilo,&ptr->boy);
		scanf("%c",&enter);
		(ptr->vki)=(ptr->kilo)*1.0/((ptr->boy)*(ptr->boy));
		if((ptr->vki)<18.5)
		strcpy(ptr->sonuc,"zayif");
		else if(18.5<=(ptr->vki)&&(ptr->vki)<25)
		strcpy(ptr->sonuc,"Normal");
		else if(25<=(ptr->vki)&&(ptr->vki)<30)
		strcpy(ptr->sonuc,"Fazla");
		else if(30<=(ptr->vki)&&(ptr->vki)<40)
		strcpy(ptr->sonuc,"Obez");
		else if((ptr->vki)>=40)
		strcpy(ptr->sonuc,"Ileri Obez");
		printf("%s %d %f %f %s\n",ptr->ad,ptr->kilo,ptr->boy,ptr->vki,ptr->sonuc);
		if((ptr->vki)>max)
		{
			max=(ptr->vki);
			j++;
			
		}
		fprintf(yaz,"%s %d %f %f %s\n",ptr->ad,ptr->kilo,ptr->boy,ptr->vki,ptr->sonuc);
		*ptr++;
	}
	fprintf(yaz,"MAX VKI= %f VKI SONUC=%s ADI=%s",max,);
	fclose(yaz);
}
*/






/*
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
struct siparis
{
	char ad[15];
	int adet,kalori;
}*ptr;
int main()
{
	FILE *oku,*yaz;
	oku=fopen("kalori.txt","r");
	yaz=fopen("siparis.txt","w");
	char yemek[15],enter;
	int kal,n,top=0,i;
	while(!feof(oku))
	{
		fscanf(oku,"%s%d",yemek,&kal);
		printf("%s %d\n",yemek,kal);
	}
	printf("Kac farkli urun siparis edeceksiniz?:");
	scanf("%d",&n);
	scanf("%c",&enter);
	ptr=(siparis*) calloc(n,sizeof(siparis));
	for(i=0;i<n;i++)
	{
		printf("Urun adi, adeti ve kalorisini giriniz:");
		scanf("%s%d%d",&ptr->ad,&ptr->adet,&ptr->kalori);
		scanf("%c",&enter);
		fprintf(yaz,"%s %d %d\n",ptr->ad,ptr->adet,ptr->kalori);
		top+=(ptr->kalori)*(ptr->adet);
		*ptr++;
	}
	printf("Toplam kalori=%d",top);
	fclose(yaz);
	fclose(oku);
	free(ptr);
	return 0;
}
*/






























































