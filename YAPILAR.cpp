/*
#include<stdio.h>//ATAMA YÖNTEMLERÝ
#include<string.h>
#include<stdlib.h>
struct ogrenci
{
	char ad[10];
	char soyad[10];
	int yas;
	float boy;
}bilgi;
int main()
{
	//1. ATAMA YÖNTEMÝ
	//strcpy(bilgi.ad,"Ali Cem");
	//strcpy(bilgi.soyad,"Duran");
	//bilgi.yas=20;
	//bilgi.boy=1.76;
	
	//2. ATAMA YÖNTEMÝ
	//ogrenci bilgi={"Ali Cem","Duran",20,1.76};
	
	//3. ATAMA YÖNTEMÝ
	//struct ogrenci *gstr=&bilgi;
	//gets((*gstr).ad);
	//gets((*gstr).soyad);
	//(*gstr).yas=20;
	//(*gstr).boy=1.76;
	
	//4. ATAMA YÖNTEMÝ
	//struct ogrenci *gstr=&bilgi;
	//gstr->yas=20;
	//gstr->boy=1.76; 
	
	//printf("%s\n%s\n%d\n%3.2f",bilgi.ad,bilgi.soyad,bilgi.yas,bilgi.boy);
}
*/






/*
#include<stdio.h>//Kitap satýþ sitesi örneði
#include<string.h>
struct kitap
{
	char ad[50];
	char yazarIsmi[50];
	int basimyili;
	float fiyat;
}RomanKitaplari[2]={{"Serenad","Zulfu Livaneli",1930,55.5},{"Suc ve Ceza","Dostoyevski",1900,38.2}};
//Kitap bilgileri þu þekildede yazýlabilir.
//kitap1={"Serenad","Zulfu Livaneli",1930,55.5},
// kitap2={"Suc ve Ceza","Dostoyevski",1900,38.2};
int main()
{
	for(int i=0;i<2;i++)
	{
	printf("%s ,%s ,%d ,%f\n",RomanKitaplari[i].ad,RomanKitaplari[i].yazarIsmi,RomanKitaplari[i].basimyili,RomanKitaplari[i].fiyat);
    }
	//float toplam;
	//printf("%s\t%s\t%d\t%f\n",kitap1.ad,kitap1.yazarIsmi,kitap1.basimyili,kitap1.fiyat);
	//printf("%s\t%s\t%d\t%f\n",kitap2.ad,kitap2.yazarIsmi,kitap2.basimyili,kitap2.fiyat);
	//toplam=kitap1.fiyat+kitap2.fiyat;
	//printf("iki kitabýn toplam fiyati=%f",toplam);
}
*/







/*
#include<stdio.h>//Iký nokta arasý mesafe hesaplar.
#include<math.h>
int main()
{
	struct noktatipi
	{
		int x,y;
	}n1,n2;
	float mesafe;
	printf("Birinci noktanin x ve y koordinatlarini giriniz: ");
	scanf("%d %d",&n1.x,&n1.y);
	printf("Ikinci noktanin x ve y koordinatlarini giriniz: ");
	scanf("%d %d",&n2.x,&n2.y);
	mesafe=sqrt(pow((n1.x-n2.x),2)+pow((n1.y-n2.y),2));
	printf("iki nokta arasi mesafe: %f",mesafe);
}
*/





/*
#include<stdio.h>//ÞÝRKET ÇALIÞANININ BÝLGÝLERÝ.
#include<string.h>
struct calisanlar
{
	char ad[50];
	char soyad[50];
	char isebaslamatarihi[20];
	float maas;
	int primsayisi;
	char cinsiyet;
}calisan1;
int main()
{
	//struct calisanlar calisan1;
	printf("Lutfen calisani bilgilerini giriniz...\n");
	scanf("%s %s %s %f %d %c",&calisan1.ad,&calisan1.soyad,&calisan1.isebaslamatarihi,&calisan1.maas,&calisan1.primsayisi,&calisan1.cinsiyet);
	printf("Calisan Bilgileri:\n");
	printf("%s %s %s %f %d %c",calisan1.ad,calisan1.soyad,calisan1.isebaslamatarihi,calisan1.maas,calisan1.primsayisi,calisan1.cinsiyet);
}
*/






/*
#include<stdio.h>//Nokta koordinatlarýný bastýrýr
#include<string.h>
#include<stdlib.h>
int main()
{
	struct nokta
	{
		float abs,ord;
	}P;
	P.abs=3.1;
	P.ord=2.1;
	printf("P noktasinin koordinatlari: %2.1f , %2.1f",P.abs,P.ord);
}
*/





/*
#include<stdio.h>// ÝKÝ NOKTA ARASI UZAKLIK
#include<math.h>
struct noktatipi
{
	int x,y;
};
float mesafe(struct noktatipi n1,struct noktatipi n2);
int main()
{
	struct noktatipi n1,n2;
	printf("Birinici nokta koordinatlarini giriniz: ");
	scanf("%d%d",&n1.x,&n1.y);
	printf("Ýkinci nokta koordinatlarini giriniz: ");
	scanf("%d%d",&n2.x,&n2.y);
	printf("Iki nokta arasi uzaklik: %f",mesafe(n1,n2));
}
float mesafe(struct noktatipi n1,struct noktatipi n2)
{
	float uz1,uz2;
	uz1=pow((n1.x-n2.x),2);
	uz2=pow((n1.y-n2.y),2);
	return (sqrt(uz1+uz2));
}
*/






/*
#include<stdio.h>//IKI NOKTA ARASI UZUNLUK
#include<math.h>
struct noktatipi
{
	int x,y;
};
struct noktatipi oku();
float mesafe(struct noktatipi *a,struct noktatipi *b);
int main()
{
	struct noktatipi n1,n2;
	float mes;
	n1=oku();
	n2=oku();
	mes=mesafe(&n1,&n2);
	printf("Iki nokta arasi mesafe: %f",mes);
}
struct noktatipi oku()
{
	struct noktatipi gecici;
	printf("noktanin koordinatlarini giriniz:");
	scanf("%d%d",&gecici.x,&gecici.y);
	return (gecici);
}
float mesafe(struct noktatipi *a,struct noktatipi *b)
{
	float uz1=pow((a->x-b->x),2);
	float uz2=pow((a->y-b->y),2);
	return sqrt(uz1+uz2);
}
*/





/*
#include<stdio.h>//30 Kiþilik sýnýftaki en yüksek ortalamayý kimin yaptýðýný bastýrýr.
#include<string.h>
struct ogrenci
{
	char isim[15];
	int yas;
	float ort;
};
void oku(struct ogrenci s[]);
int main()
{
	struct ogrenci sinif[30];
	float buyuk=0.0;
	char birinci[15];
	int i;
	oku(sinif);
	for(i=0;i<30;i++)
	{
		if((sinif[i].ort)>buyuk)
		{
			buyuk=sinif[i].ort;
			strcpy(birinci,sinif[i].isim);
		}
	}
	printf("En yuksek ortalama %5.2f ile %s'e aittir",buyuk,birinci);
}
void oku(struct ogrenci s[])
{
	int i;
	for(i=0;i<30;i++)
	{
		printf("%d. ogrenci bilgilerini giriniz(isim,yas,ortalama):",i+1);
		scanf("%s",&s[i].isim);
		scanf("%d %f",&s[i].yas,&s[i].ort);
	}
}
*/






/*
#include<stdio.h>//IKI NOKTANIN TAM ORTASINDAKÝ NOKTA KOORDÝNATLARÝNÝ HESAPLAR.
struct noktatipi
{
	int x,y;
};
int main()
{
	struct noktatipi n1,n2;
	struct ortanokta
	{
		int x,y;
	}nokta;
	printf("Birinici nokta koordinatlarini giriniz: ");
	scanf("%d%d",&n1.x,&n1.y);
	printf("Ikinci nokta koordinatlarini giriniz: ");
	scanf("%d%d",&n2.x,&n2.y);
	nokta.x=(n1.x+n2.x)/2;
	nokta.y=(n1.y+n2.y)/2;
	printf("Orta nokta koordinatlari: %d , %d",nokta.x,nokta.y);
}
*/





/*
#include<stdio.h>//KARMAÞIK SAYI TOPLAMI YAPAR.
struct kompleks
{
	int reel,sanal;
};
void topla(struct kompleks *s1,struct kompleks *s2);
int main()
{
	struct kompleks s1,s2;
	printf("Birinci sayi:");
	scanf("%d%d",&s1.reel,&s1.sanal);
	printf("Ikinci sayi:");
	scanf("%d%d",&s2.reel,&s2.sanal);
	topla(&s1,&s2);
}
void topla(struct kompleks *s1,struct kompleks *s2)
{
	int rtop,stop;
	rtop=(*s1).reel+(*s2).reel;
	stop=(*s1).sanal+(*s2).sanal;
	printf("Toplam: %d+%di",rtop,stop);
}
*/







/*
#include<stdio.h>
#include<string.h>
struct kesir
{
	int bolen,bolunen;
}k1,k2,sonuc;

struct kesir topla(struct kesir k1,struct kesir k2);
struct kesir fark(struct kesir k1,struct kesir k2);
struct kesir carp(struct kesir k1,struct kesir k2);
struct kesir bol(struct kesir k1,struct kesir k2);
struct kesir sadelestir(struct kesir k1);
int main()
{
	char tur,enter;
	do
	{
		printf("\nTopla:T\nCikart:F\nCarp:C\nBol:B\nSadelestir:S\nKapat:K\n");
		printf("Yapacaginiz islem turunu seciniz:");
	    scanf("%c",&tur);
	    switch(tur)
	    {
	    	case 'T':
	    		printf("Birinci kesrin pay ve paydasini giriniz:");
	    		scanf("%d%d",&k1.bolen,&k1.bolunen);
	    		printf("Ikinci kesrin pay ve paydasini giriniz:");
	    		scanf("%d%d",&k2.bolen,&k2.bolunen);
	    		scanf("%c",&enter);
	    		sonuc=topla(k1,k2);
	    		printf("%d/%d + %d/%d = %d/%d\n",k1.bolen,k1.bolunen,k2.bolen,k2.bolunen,sonuc.bolen,sonuc.bolunen);
	    		break;
	    	case 'F':
				printf("Birinci kesrin pay ve paydasini giriniz:");
	    		scanf("%d%d",&k1.bolen,&k1.bolunen);
	    		printf("Ikinci kesrin pay ve paydasini giriniz:");
	    		scanf("%d%d",&k2.bolen,&k2.bolunen);
	    		scanf("%c",&enter);
	    		sonuc=fark(k1,k2);
	    		printf("%d/%d - %d/%d = %d/%d\n",k1.bolen,k1.bolunen,k2.bolen,k2.bolunen,sonuc.bolen,sonuc.bolunen);
	    		break;
	    	case 'C':
			    printf("Birinci kesrin pay ve paydasini giriniz:");
	    		scanf("%d%d",&k1.bolen,&k1.bolunen);
	    		printf("Ikinci kesrin pay ve paydasini giriniz:");
	    		scanf("%d%d",&k2.bolen,&k2.bolunen);
	    		scanf("%c",&enter);
	    		sonuc=carp(k1,k2);
	    		printf("%d/%d * %d/%d = %d/%d\n",k1.bolen,k1.bolunen,k2.bolen,k2.bolunen,sonuc.bolen,sonuc.bolunen);
	    		break;
			case 'B':
			    printf("Birinci kesrin pay ve paydasini giriniz:");
	    		scanf("%d%d",&k1.bolen,&k1.bolunen);
	    		printf("Ikinci kesrin pay ve paydasini giriniz:");
	    		scanf("%d%d",&k2.bolen,&k2.bolunen);
	    		scanf("%c",&enter);
	    		sonuc=bol(k1,k2);
	    		printf("%d/%d / %d/%d = %d/%d\n",k1.bolen,k1.bolunen,k2.bolen,k2.bolunen,sonuc.bolen,sonuc.bolunen);
	    		break;
			case 'S':
			    printf("Kesrin pay ve paydasini giriniz:");
	    		scanf("%d%d",&k1.bolen,&k1.bolunen);
	    		scanf("%c",&enter);
	    		sonuc=sadelestir(k1);
	    		printf("%d/%d = %d/%d\n",k1.bolen,k1.bolunen,sonuc.bolen,sonuc.bolunen);
	    		break;
				default:printf("Yanlis secim giridiniz. Lutfen tekrar gririniz.");
		}
	}while(tur!='K');
}
struct kesir topla(struct kesir k1,struct kesir k2)
{
	sonuc.bolen=k1.bolen*k2.bolunen+k2.bolen*k1.bolunen;
	sonuc.bolunen=k1.bolunen*k2.bolunen;
    return (sonuc);
}
struct kesir fark(struct kesir k1,struct kesir k2)
{
	sonuc.bolen=k1.bolen*k2.bolunen-k2.bolen*k1.bolunen;
	sonuc.bolunen=k1.bolunen*k2.bolunen;
    return (sonuc);
}
struct kesir carp(struct kesir k1,struct kesir k2)
{
	sonuc.bolen=k1.bolen*k2.bolen;
	sonuc.bolunen=k1.bolunen*k2.bolunen;
	return (sonuc);
}
struct kesir bol(struct kesir k1,struct kesir k2)
{
	sonuc.bolen=k1.bolen*k2.bolunen;
	sonuc.bolunen=k1.bolunen*k2.bolen;
	return (sonuc);
}
struct kesir sadelestir(struct kesir k1)
{
	int i;
	for(i=k1.bolen;i!=2;i--)
	{
		if(k1.bolen%i==0&&k1.bolunen%i==0)
		{
			sonuc.bolen=k1.bolen/i;
			sonuc.bolunen=k1.bolunen/i;
		}
	}
	return (sonuc);
}
*/














/*
#include<stdio.h>//MEKTUP BÝLGÝSÝ BASTIRIR.//Konu.320.5
struct kisi
{
	char isim[15];
	char soyisim[15];
	int TCNo;
}insan;
struct adres
{
	char mahalle[25],sehir[20],apartman[15];
	int daireno;
	struct kisi insan;
}zarf[3];
int main()
{
	int i,zno;
	char enter,cevap;
	for(i=0;i<3;i++)
	{
		printf("%d. zarf bilgilerini giriniz:\n",i+1);
		printf("Isim:");
		gets(zarf[i].insan.isim);
		printf("Soyisim:");
		gets(zarf[i].insan.soyisim);
		printf("TC No:");
		scanf("%d",&zarf[i].insan.TCNo);
		scanf("%c",&enter);
		printf("Mahale:");
		gets(zarf[i].mahalle);
		printf("Sehir:");
		gets(zarf[i].sehir);
		printf("Apartman:");
		gets(zarf[i].apartman);
		printf("Daire No:");
		scanf("%d",&zarf[i].daireno);
		scanf("%c",&enter);
	}
	do
	{
		printf("Lutfen zarf noyu giriniz:");
	    scanf("%d",&zno);
	    printf("%s %s (TC:%d)\n%s Apartmani,%d No,%s , %s\n\n",zarf[zno].insan.isim,zarf[zno].insan.soyisim,zarf[zno].insan.TCNo,zarf[zno].apartman,zarf[zno].daireno,zarf[zno].mahalle,zarf[zno].sehir);
	    printf("Yeni islem yapmak istiyormusunuz?"); 
	    scanf("%c",&cevap);
	    scanf("%c",&enter);
	}while(cevap!='H');	
}
*/









/*
#include<stdio.h>//SÝRKETTEKÝ CALÝSAN BÝLGÝLERÝNÝ BULUR.
#include<string.h>//konu.320.6
struct ABC
{
	char isim[15],soyisim[15],bolum[30];
	int yas,aylik;
}kisi[3];
float ort(struct ABC kisi[3],int x);
int ust(struct ABC kisi[3],int x);

int main()
{
	char enter;
	int i,x;
	int yuksek=0;
	char yuksekisim[15],yukseksoy[15];
	printf("Sirketinizde kac calisan var?");
	scanf("%d",&x);
	scanf("%c",&enter);
	for(i=0;i<x;i++)
	{
		printf("*******************************\n%d. Calisan bilgilerini giriniz.\n",i+1);
		printf("Isim:");
		gets(kisi[i].isim);
		printf("Soyisim:");
		gets(kisi[i].soyisim);
		printf("Calistigi Bolum:");
		gets(kisi[i].bolum);
		printf("Yasi:");
		scanf("%d",&kisi[i].yas);
		scanf("%c",&enter);
		printf("Aylik ucreti:");
		scanf("%d",&kisi[i].aylik);
		scanf("%c",&enter);
		if(kisi[i].aylik>yuksek)
		{
			strcpy(yuksekisim,kisi[i].isim);
			strcpy(yukseksoy,kisi[i].soyisim);
		}
	}
	printf("60 Yas ustu calisan sayisi: %d\n",ust(kisi,x));
	printf("Ortalama aylik:%f\n",ort(kisi,x));
	printf("En yuksek maasi alan calisan:%s %s\n",yuksekisim,yukseksoy);
	
}
float ort(struct ABC kisi[50],int x)
{
	int i,top=0;
	float ort;
	for(i=0;i<x;i++)
	{
		top+=kisi[i].aylik;
	}
    ort=top/x;
    return ort;
}
int ust(struct ABC kisi[3],int x)
{
	int i,say=0;
	for(i=0;i<x;i++)
	{
		if(kisi[i].yas>60)
		say++;
	}
	return say;
}
*/








/*
#include<stdio.h>//SINIFTA KAC OGRENCÝNÝN KALDIÐINI BULUR.
#include<string.h>//Konu.320.7
struct sinif
{
	char isim[15];
	int no;
	float ort;
}ogr[100];
int main()
{
	char enter;
	int x,i,say=0;
	printf("Kac ogrenci var?");
	scanf("%d",&x);
	scanf("%c",&enter);
	for(i=0;i<x;i++)
	{
		printf("*****************\n%d. ogrenci bilgilerini giriniz:\n",i+1);
		printf("Isim:");
		gets(ogr[i].isim);
		printf("No:");
		scanf("%d",&ogr[i].no);
		printf("Ortalama:");
		scanf("%f",&ogr[i].ort);
		scanf("%c",&enter);
	}
	for(i=0;i<x;i++)
	{
		if(ogr[i].ort<60.00)
		{
			say++;
			printf("%d. Ogrenci: %s(%f)\n",say,ogr[i].isim,ogr[i].ort);
		}
	}
	printf("Toplam %d ogrenci kalmistir.",say);
}
*/









/*
#include<stdio.h>//SÝCAKLÝK FARKÝ EN FAZLA OLAN ÝLÝ BELÝRLER.
#include<string.h>//Konu.320.8
#include<math.h>
struct havadurumu
{
	char isim[20];
	int yuksek,dusuk;
}sehir[20];
int main()
{
	char enter,enfazlasehir[20];
	int i,x,fark=0;
	printf("Kac sehir gireceksiniz: ");
	scanf("%d",&x);
	scanf("%c",&enter);
	for(i=0;i<x;i++)
	{
		printf("%d. sehir bilgilerini gir:\n",i+1);
		printf("Sehir ismi:");
		gets(sehir[i].isim);
		printf("%s sehrinin en yuksek sicakligi:",sehir[i].isim);
		scanf("%d",&sehir[i].yuksek);
		printf("%s sehrinin en dusuk sicakligi:",sehir[i].isim);
		scanf("%d",&sehir[i].dusuk);
			scanf("%c",&enter);
	}
	for(i=0;i<x;i++)
	{
		if(abs((sehir[i].yuksek)-(sehir[i].dusuk))>fark)
		{
		    fark=abs((sehir[i].yuksek)-(sehir[i].dusuk));
		    strcpy(enfazlasehir,sehir[i].isim);
	    }
	}
	printf("En fazla sicaklik farki olan il:%s",enfazlasehir);
}
*/








/*
#include<stdio.h>//Basketbol takýmý oyuncu bilgileri.
#include<string.h>//Konu.321.10
struct takim
{
	char isim[15];
	int boy,skor,rebound;
}oyuncu[12];
int main()
{
	int i,x,rb=0,sr=0,top=0;
	char enter,skorer[20],iyirebound[20];
	printf("Kac oyuncu gireceksiniz: ");
	scanf("%d",&x);
	scanf("%c",&enter);
	for(i=0;i<x;i++)
	{
		printf("%d. oyuncu bilgileri:\n",i+1);
		printf("Oyuncu ismi:");
		gets(oyuncu[i].isim);
		printf("Boyu:");
		scanf("%d",&oyuncu[i].boy);
		printf("Ortalama Skor:");
		scanf("%d",&oyuncu[i].skor);
		printf("Ortalama rebound: ");
		scanf("%d",&oyuncu[i].rebound);
		scanf("%c",&enter);
	}
	for(i=0;i<x;i++)
	{
		top+=oyuncu[i].boy;
		if(oyuncu[i].skor>sr)
		{
			sr=oyuncu[i].skor;
			strcpy(skorer,oyuncu[i].isim);
		}
		if(oyuncu[i].rebound>rb)
		{
			rb=oyuncu[i].rebound;
			strcpy(iyirebound,oyuncu[i].isim);
		}
	}
	printf("Ortalama Boy:%f\n",top*1.0/x);
	printf("En Skorer Oyuncu:%s\n",skorer);
	printf("En iyi rebound alan oyuncu:%s",iyirebound);	
}
*/






/*
#include<stdio.h>//PAZARLAMACÝNIN SATIÞ MÝKTARÝNA GORE KOMÝSYON HESAPLAR.
#include<string.h>//Konu.321.11
struct firma
{
	char isim[15];
	int satis;
}pazarlamaci[50];
int main()
{
	char enter;
	float ort,komisyon[50];
	int i,x,top=0;
	printf("Kac pazarlamaci sayisi gireceksiniz?");
	scanf("%d",&x);
	scanf("%c",&enter);
	for(i=0;i<x;i++)
	{
		printf("*************************\n%d. pazarlamaci bilgileri:\n",i+1);
		printf("Ad:");
		gets(pazarlamaci[i].isim);
		printf("Satis Miktari:");
		scanf("%d",&pazarlamaci[i].satis);
		scanf("%c",&enter);
		top+=pazarlamaci[i].satis;
	}
	ort=top*1.0/x;
	printf("Firma satis ortalamasi:%f\n",ort);
	for(i=0;i<x;i++)
	{
		if(pazarlamaci[i].satis<5000)
		{
			komisyon[i]=(pazarlamaci[i].satis)*4/100;
		}
		if(pazarlamaci[i].satis>=5000)
		{
			komisyon[i]=(pazarlamaci[i].satis)*6/100;
		}
		if(pazarlamaci[i].satis>ort)
		{
			komisyon[i]+=500;
		}
	}
	printf("PAZARLAMACILARIN KOMISYON BILGILERI\n\n");
	for(i=0;i<x;i++)
	{
		printf("%s isimli pazarlamaci %d YTL satis miktari uzerinden %f YTL komisyon almistir.\n",pazarlamaci[i].isim,pazarlamaci[i].satis,komisyon[i]);
	}
}
*/





/*
#include<stdio.h>//Maraton Koþusundaki birincileri yazdýrýr
#include<string.h>//Konu.321.12
struct Zaman
{
	int saat,dakika,saniye;
}sure;

struct Maraton
{
	char isim[15],ulke[20],cinsiyet;
	struct Zaman sure;
}atlet[50];

int main()
{
	int i,x,h[50],kisa;
	char enter,birinciTurk[15],birinciE[15],birinciK[15];
	printf("Maraton Kosusunda Kac Atlet Var?");
	scanf("%d",&x);
	scanf("%c",&enter);
	for(i=0;i<x;i++)
	{
		printf("%d. Atlet Bilgileri:\n\n",i+1);
		printf("Isim:");
		gets(atlet[i].isim);
		printf("Ulke:");
		gets(atlet[i].ulke);
		printf("Cinsiyet:");
		scanf("%c",&atlet[i].cinsiyet);
		printf("Kosucu maratonu ne kadar surede bitirdi?(saat,dakika,saniye)");
		scanf("%d%d%d",&atlet[i].sure.saat,&atlet[i].sure.dakika,&atlet[i].sure.saniye);
		scanf("%c",&enter);
		
		h[i]=(atlet[i].sure.saat)*3600+(atlet[i].sure.dakika)*60+(atlet[i].sure.saniye);
	}
	kisa=100000;
	for(i=0;i<x;i++)
	{
		if(atlet[i].cinsiyet=='E')
		{
			if(h[i]<kisa)
			{
				kisa=h[i];
				strcpy(birinciE,atlet[i].isim);
			}
		}
	}
	kisa=100000;
	for(i=0;i<x;i++)
	{
		if(atlet[i].cinsiyet=='K')
		{
			if(h[i]<kisa)
			{
				kisa=h[i];
				strcpy(birinciK,atlet[i].isim);
			}
		}
	}
	kisa=100000;
	for(i=0;i<x;i++)
	{
		if(strcmp(atlet[i].ulke,"Turkiye")==0)
		{
			if(h[i]<kisa)
			{
				kisa=h[i];
				strcpy(birinciTurk,atlet[i].isim);
			}
		}
	}
	printf("\n\n");
	printf("Birinci Erkek Atlet: %s\n",birinciE);
	printf("Birinci Kadin Atlet: %s\n",birinciK);
	printf("Birinci Turk Atlet: %s",birinciTurk);
}
*/



/*
#include<stdio.h>//P(x,y)noktasinin y=mx+b dogrusunu saðlayýp saðlamadýðýný kontrol eder.
#include<string.h>//soru.160.13
struct dgr
{
	int m,b;
}dogru[100];
struct nkt
{
	int x,y;
	int sonuc;
}nokta[100];
int main()
{
	int i=0,k;
	char cevap,enter;
	do
	{
		printf("\n\n%d. Dogru denklemine ait m ve b yi giriniz",i+1);
		scanf("%d%d",&dogru[i].m,&dogru[i].b);
		printf("%d. Noktanin koordinatlarini giriniz:",i+1);
		scanf("%d%d",&nokta[i].x,&nokta[i].y);
		if(nokta[i].y==(dogru[i].m)*(nokta[i].x)+(dogru[i].b))
		{
			nokta[i++].sonuc=1;
		}
		else
		{
			nokta[i++].sonuc=0;
		}
		printf("Yeni nokta girecekmisiniz?(E-H)");
		scanf("%c",&enter);
		scanf("%c",&cevap);
	}while(cevap=='E');
	for(k=0;k<i;k++)
	{
		if(nokta[k].sonuc==1)
		printf("x=%d\ty=%d\n",nokta[k].x,nokta[k].y);
	}
}
*/








/*
#include<stdio.h>//Iki karmaþýk sayýyý toplar.
#include<string.h>//Soru.160.14
struct
{
	int gercel,sanal;
	int sonucger,sonucsan;
}karmasik[2];

int main()
{
	int i;
	char op,enter;
	printf("Birinci karmasik sayi:");
	scanf("%d%d",&karmasik[0].gercel,&karmasik[0].sanal);
	printf("Ikinci karmasik sayi:");
	scanf("%d%d",&karmasik[1].gercel,&karmasik[1].sanal);
	printf("Operator(+/-):");
	scanf("%c",&enter);
	scanf("%c",&op);
	if(op=='+')
	{
		karmasik[0].sonucger=karmasik[0].gercel+karmasik[1].gercel;
		karmasik[0].sonucsan=karmasik[0].sanal+karmasik[1].sanal;
	}
	if(op=='-')
	{
		karmasik[0].sonucger=karmasik[0].gercel-karmasik[1].gercel;
		karmasik[0].sonucsan=karmasik[0].sanal-karmasik[1].sanal;
	}
	printf("Sonuc:%d%c%di",karmasik[0].sonucger,op,karmasik[0].sonucsan);
}
*/






/*
#include<stdio.h>//Yukaridaki sorunun fonksiyonlu hali.
#include<string.h>//Soru.160.15
struct kompleks
{
	int gercel,sanal;
};
struct kompleks f(struct kompleks,struct kompleks,char);
int main()
{
	struct kompleks karmasik1,karmasik2,sonuc;
	char op,enter;
	printf("Birinci karmasik sayi:");
	scanf("%d%d",&karmasik1.gercel,&karmasik1.sanal);
	
	printf("Ikinci karmasik sayi:");
	scanf("%d%d",&karmasik2.gercel,&karmasik2.sanal);
	
	printf("Operator(+/-):");
	scanf("%c",&enter);
	scanf("%c",&op);
	
	sonuc=f(karmasik1,karmasik2,op);
	
	printf("Sonuc:%d",sonuc.gercel);
	if(sonuc.sanal>0)
	printf("+%di",sonuc.sanal);
	else
	printf("%di",sonuc.sanal);
	return 0;
}
struct kompleks f(struct kompleks s1,struct kompleks s2,char oper)
{
	struct kompleks sonuc;
	if(oper=='+')
	{
		sonuc.gercel=s1.gercel+s2.gercel;
		sonuc.sanal=s1.sanal+s2.sanal;
	}
    if(oper=='-')
	{
		sonuc.gercel=s1.gercel-s2.gercel;
		sonuc.sanal=s1.sanal-s2.sanal;
	}
	return (sonuc);
}
*/










/*
#include<stdio.h>//Buz pateni yarýþmacisinin ortalama puanýný hesaplar.
#include<string.h>//Soru.160.16
struct yarisma
{
	char ad[15],soyad[15];
	float puan[10],performans;
};
float hesaplama(struct yarisma);
int main()
{
	struct yarisma patenci;
	int i;
	char enter;
	printf("Yarismacinin adi: ");
	gets(patenci.ad);
	printf("Yarismacinin soyadi: ");
	gets(patenci.soyad);
	for(i=0;i<10;i++)
	{
		printf("%d. Hakem puani: ",i+1);
		scanf("%f",&patenci.puan[i]);
	}
	patenci.performans=hesaplama(patenci);
	printf("Performans puani:%5.2f",patenci.performans);
}
float hesaplama(struct yarisma pat)
{
	float top=0.0,max=0.0,min=6.0;
	int i;
	for(i=0;i<10;i++)
	{
		if(pat.puan[i]>max)
		max=pat.puan[i];
		if(pat.puan[i]<min)
		min=pat.puan[i];
		top+=pat.puan[i];
	}
	return((top-max-min)/8);
}
*/







/*
#include<stdio.h>//Yukarýdaki sorunun çoklu yarýþmacýlý hali
#include<string.h>//soru.161.17
struct yarismaci
{
	char ad[15],soyad[15];
	float puan[10],performans;
};
float hesaplama(struct yarismaci);
int main()
{
	struct yarismaci patenci[100];
	int i,k,n,bir;
	char enter;
	float maxpuan=0.0;
	printf("Yarismada kac adet patenci var?");
	scanf("%d",&n);
	scanf("%c",&enter);
	for(i=0;i<n;i++)
	{
		printf("%d. Patencinin adi: ",i+1);
		gets(patenci[i].ad);
		printf("%d. Patencinin soyadi: ",i+1);
		gets(patenci[i].soyad);
		printf("%d. Patenciye ait hakem puanlari:\n ",i+1);
		for(k=0;k<10;k++)
		{
			printf("%d.hakem puani: ",k+1);
			scanf("%f",&patenci[i].puan[k]);
	    }
	    scanf("%c",&enter);
		patenci[i].performans=hesaplama(patenci[i]);
		printf("%s %s isimli patencinin puani: %5.2f\n",patenci[i].ad,patenci[i].soyad,patenci[i].performans);
		if(patenci[i].performans>maxpuan)
		{
			maxpuan=patenci[i].performans;
			bir=i;
		}
	}
	printf("Yarisma Birincisi:\n");
	printf("%5.2f Puanla: %s %s",maxpuan,patenci[bir].ad,patenci[bir].soyad);
}
float hesaplama(struct yarismaci pat)
{
	float sonuc,top=0.0,min=6.0,max=0.0;
	int i;
	for(i=0;i<10;i++)
	{
		if(pat.puan[i]>max)
		max=pat.puan[i];
		if(pat.puan[i]<min)
		min=pat.puan[i];
		top+=pat.puan[i];
	}
	sonuc=(top-max-min)/8;
	return sonuc;
}
*/







/*
#include<stdio.h>//Bir sinifta ogrencilerin sinav notunu hesaplar.
#include<string.h>//soru.161.18
struct sinif
{
	int no;
	char yanit[10];
}ogrenci[30];
struct 
{
	int no,puan;
}talebe[30];
int main()
{
	int i,j,x,D,Y;
	char enter,cevaplar[10];
	printf("Kac ogrenci var?");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		printf("%d. ogrenci numarasi:",i+1);
		scanf("%d",&ogrenci[i].no);
		scanf("%c",&enter);
		printf("%d nolu ogrencinin yanitlari:\n",ogrenci[i].no);
		for(j=0;j<10;j++)
		{
			printf("%d. soru:",j+1);
			scanf("%c",&ogrenci[i].yanit[j]);
			scanf("%c",&enter);
		}
	}
	printf("Sinav cevaplarini giriniz: \n");
	for(i=0;i<10;i++)
	{
		printf("%d. soru cevabi:",i+1);
		scanf("%c",&cevaplar[i]);
		scanf("%c",&enter);
	}
	for(i=0;i<x;i++)
	{
		D=Y=0;
		for(j=0;j<10;j++)
		{
			if(ogrenci[i].yanit[j]==cevaplar[j])
			D++;
			if(ogrenci[i].yanit[j]!=cevaplar[j])
			Y++;
		}
		D=D-(Y/4);
		talebe[i].puan=D;
		talebe[i].no=ogrenci[i].no;
	}
	for(i=0;i<x;i++)
	{
		printf("%d nolu ogrenci %d puan almistir.\n",talebe[i].no,talebe[i].puan);
	}
}
*/







/*
#include<stdio.h>
#include<string.h>
struct sinif
{
	int no;
	char yanit[10];
};
struct og
{
	int no,puan;
};
struct og* f(struct sinif,char cevap[10]);
int main()
{
	struct og *sonuc;
	struct sinif ogrenci[30];
	int i,j,x;
	char cevap[10],enter;
	printf("Sinifta kac ogrenci var?");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		printf("%d. ogrenci no:",i+1);
		scanf("%d",&ogrenci[i].no);
		printf("%d nolu ogrenci cevaplari:\n",ogrenci[i].no);
		for(j=0;j<10;j++)
		{
			printf("%d. Soru:",j+1);
			scanf("%c",&ogrenci[i].yanit[j]);
		}
	}
	printf("Sinav cevaplarini giriniz:\n");
	for(j=0;j<10;j++)
	{
		printf("%d. soru cevabi:",j+1);
		scanf("%c",&cevap[j]);
	}
	sonuc=f(ogrenci,cevap);
}
struct og* f(struct sinif ogrenci[30],char cevap[10])
{
	struct og talebe[30];
	int i,j,D,Y,x=5;
	for(i=0;i<x;i++)
	{
		D=Y=0;
		for(j=0;j<10;j++)
		{
			if(ogrenci[i].yanit[j]==cevap[j])
			D++;
			if(ogrenci[i].yanit[j]!=cevap[j])
			Y++;
		}
		D=D-(Y/4);
		talebe[i].puan=D;
		talebe[i].no=ogrenci[i].no;
	}
	return talebe;
}
*/





/*
#include<stdio.h>Soru.161.20
struct degertip
{
	int secim;
	union
	{
		char kar;
		float rs;
	}k;
};
int main()
{
	struct degertip degerler[20];
	int i=-1,sayac=0;
	char enter;
	float top=0.0;
	do
	{
		i++;
		printf("Tamsayi giriniz:");
		scanf("%d",&degerler[i].secim);
		scanf("%c",&enter);
		if(degerler[i].secim==1)
		{
			printf("Karakter giriniz:");
			scanf("%c",&degerler[i].k.kar);
		}
		if(degerler[i].secim==0)
		{
			printf("Reel sayi giriniz:");
			scanf("%f",&degerler[i].k.rs);
			sayac++;
		}
		top+=degerler[i].k.rs;
		
	}while(degerler[i].secim==1||degerler[i].secim==0);
	printf("Reel sayilarin ortalamasi:%f",top/(sayac*1.0));
}
*/



























































































































