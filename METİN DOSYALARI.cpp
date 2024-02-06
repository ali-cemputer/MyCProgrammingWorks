/*
#include<stdio.h>// Dosyaya iki vize bir final notu girilmiþ öðrencilerin ortalaasýný hesaplar.
int main()
{
	int s1,s2,final,ort;
	char ad[15];
	FILE *dosyaoku;
	dosyaoku=fopen("ogrenci.txt","r");
	while(fscanf(dosyaoku,"%s %d %d %d \n",&ad,&s1,&s2,&final)!=EOF)
	{
		ort=(s1*0.25)+(s2*0.25)+(final*0.5);
		printf("%s=%d\n",ad,ort);
	}
	fclose(dosyaoku);
	return(0);
}
*/

/*
#include<stdio.h>//ogrenci ortalamalýrýný baþka bir dosyaya yazdýrýr.
int main()
{
	int s1,s2,final,ort;
	char ad[15];
	FILE *dosyaoku,*dosyayaz;
	dosyaoku=fopen("ogrenci.txt","r");
	dosyayaz=fopen("notlar.txt","w");
	while(fscanf(dosyaoku,"%s%d%d%d\n",&ad,&s1,&s2,&final)!=EOF)
	{
		ort=(s1*0.25)+(s2*0.25)+(final*0.5);
		fprintf(dosyayaz,"%s : %d\n",ad,ort);
	}
	fclose(dosyaoku);
	fclose(dosyayaz);
	return 0;
}
*/






/*
#include<stdio.h>//Dosyaya girilen metindeki karakter kelime kayit sayýsýný hesaplar.
int main()
{
	char harf;
	int kayit=0,kelime=0,karakter=0;
	FILE *dosyaoku=fopen("konu1.txt","r");
	while(!feof(dosyaoku))
	{
		harf=fgetc(dosyaoku);
		if(harf=='\n')
		kayit++;
		else if(harf==' ')
		{
			kelime++;
			karakter++;
		}
		else
		karakter++;
	}
	printf("kayit sayisi:%d\nkelime sayisi:%d\nkayit sayisi:%d\n",kayit,kelime,karakter);
	fclose(dosyaoku);
	return 0;
}
*/







#include<stdio.h>
#include<string.h>
int main()
{
	char isim[5];
	int i=0,j,k=0,uz;
	FILE *dosyaoku=fopen("konu2.txt","r");
	while(!feof(dosyaoku))
	{
		fscanf(dosyaoku,"%s",&isim[k]);
		for(i=0;i<strlen(isim);i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("%c",isim[j]);
			}
		}
		
		printf("\n");
	}
	fclose(dosyaoku);
}






/*
#include<stdio.h>//DOSYADAN BÝLGÝLERÝN KARAKTER KARAKTER OKUNMASI
#include<string.h>
int main()
{
	char karakter;
	FILE *dosya=fopen("bilgi.txt","r");
	if(dosya==NULL)
	{
		printf("Dosya bulunamadi!!");
	}
	else
	{
		do
		{
			karakter=getc(dosya);
			if(karakter!=EOF)
			{
				putchar(karakter);
				
			}
		}while(karakter!=EOF);
	}
	fclose(dosya);
	printf("\n Okuma islemi tamamlandi.");
	return 0;
}
*/





/*
#include<stdio.h>//Dosyadan satýr satýr bilgi okuyup dosyaya yazdýrma.
int main()
{
	FILE *dosya;
	char satir[100],*karakter;
	dosya=fopen("bilgi2.txt","r");
	if(dosya==NULL)
	{
		printf("Dosya olusmadi!");
	}
	else
	{
		do
		{
			karakter=fgets(satir,100,dosya);
			if(karakter!=NULL)
			{
				printf("%s",satir);
			}
		}while(karakter!=NULL);
		fclose(dosya);
	}
	return 0;
}
*/




/*
#include<stdio.h>//TEK CÝFT SAYILARI DOSYADAN OKUMA VE DOSYAYA YAZMA
int main()
{
	FILE *dosya;
	dosya=fopen("tekcift.txt","w");
	int n,i;
	if(dosya==NULL)
	{
		printf("Dosya olusturalamadý!!");
	}
	else
	{
		printf("Bir sayi giriniz: ");
		scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
			if(i%2==0)
			{
				fprintf(dosya,"%d=CIFT\n",i);
			}
			else
			{
				fprintf(dosya,"%d=TEK\n",i);
			}
		}
		fclose(dosya);
		printf("\nBilgiler dosyaya yazldi.");
		
		printf("\nDosyalar okunuyor.\n");
		char karakter;
		dosya=fopen("tekcift.txt","r");
		do
		{
			karakter=fgetc(dosya);
			if(karakter!=EOF)
			{
				printf("%c",karakter);
			}
		}while(karakter!=EOF);
		fclose(dosya);
		return 0;
	}
    fclose(dosya);
 } 
 */
 





/*
#include<stdio.h>//Dosyaya karakter karakter bilgi ekleme
int main()
{
	FILE *dosya=fopen("bilgi3.txt","a");
	char cumle[20];
	if(dosya==NULL)
	{
		printf("Dosya bulunamadi.");
	}
	else
	{
		printf("Lutfen bir cumle giriniz.");
		gets(cumle);
		for(int i=0;cumle[i];i++)
		{
			putc(cumle[i],dosya);
		}
	}
	fclose(dosya);
	printf("Cumle dosyaya yazildi.");
}
*/





/*
#include<stdio.h>//Dosyaya ogrenci ortalamasi yzdirir
#include<string.h>
struct ogrenci
{
	char adsoyad[30];
	char ders[20];
	int vize1,vize2,finalnotu;
};
int main()
{
	char enter;
	int n,i;
	float ort;
	FILE *dosya=fopen("dersler.txt","w");
	printf("Ogrenci sayisini giriniz: ");
	scanf("%d",&n);
	scanf("%c",&enter);
	struct ogrenci ogr[n];
	if(dosya==NULL)
	{
		printf("Dosya  bulunamadi...");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("%d. Ogrenci ad soyadini giriniz:",i+1);
			gets(ogr[i].adsoyad);
			printf("Ders adi:");
			gets(ogr[i].ders);
			printf("Sinav notlarinizi girin(vize1,vize2,final):");
			scanf("%d%d%d",&ogr[i].vize1,&ogr[i].vize2,&ogr[i].finalnotu);
			scanf("%c",&enter);
			ort=ogr[i].vize1*0.2+ogr[i].vize2*0.2+ogr[i].finalnotu*0.6;
			fprintf(dosya,"%s:\t%f",ogr[i].adsoyad,ort);
		}
		fclose(dosya);
	}
	return 0;
}
*/





/*
#include<stdio.h>//AÇILARIN SÝN VE COS DEÐERLERÝNÝ DOSYAYA YAZDIRIR.
#include<stdlib.h>
#include<math.h>
#define PI 3.14
int main()
{
	FILE *dosya=fopen("acilar.txt","w");
	int i;
	double sinus,cosinus;
	if(dosya==NULL)
	{
		printf("Dosya olusturalamdi.");
	}
	else
	{
		fprintf(dosya,"DERECE\tSIN\t\tCOS\n");
		fprintf(dosya,"======\t===\t\t===\n");
		for(i=0;i<=360;i++)
		{
			sinus=sin(i*PI/180);
			cosinus=cos(i*PI/180);
			fprintf(dosya,"%d\t %lf\t %lf\t\n",i,sinus,cosinus);
		}
		fclose(dosya);
	}
}
*/






/*
#include<stdio.h>//DOSYA YOLUNU VERÝP EKRANA LÝSTELEYEN PROGRAM
int main()
{
	FILE *dosya;
	char *karakter;
	char satir[100],dosyaismi[45];
	printf("Lutfen dosya yolunu ve ismini giriniz:");
	gets(dosyaismi);
	dosya=fopen(dosyaismi,"r");
	if(dosya==NULL)
	{
		printf("Dosya bulunamadi..");
	}
	else
	{
		do
		{
			karakter=fgets(satir,100,dosya);
			if(karakter!=NULL)
			{
				printf("%s",satir);
			}
		}while(karakter!=NULL);
	}
	fclose(dosya);
}
*/





/*
#include<stdio.h>//Dosyayý belirtilen adrese yedekler.
#include<string.h>
int main()
{
	FILE *giris,*cikis;
	char karakter,kaynak[50],hedef[50];
	printf("Lutfen yedeklenecek dosyanin adini ve uzantisini giriniz:");
	gets(kaynak);
	giris=fopen(kaynak,"r");
	if(giris==NULL)
	{
		printf("Hata!!");
	}
	printf("Lutfen yedeklenecek dosyanin yerini,dosya adini giriniz:");
	gets(hedef);
    cikis=fopen(hedef,"w");
    if(cikis==NULL)
    {
    	printf("Dosya olusturalamadi.");
	}
    for(karakter=getc(giris);karakter!=EOF;karakter=getc(giris))
    {
    	putc(karakter,cikis);
	}
	fclose(giris);
	fclose(cikis);
	printf("Dosya yazdirildi.");
}
*/








/*
#include<stdio.h>//0 girilinceye kadar dosyaya sürekli bilgi ekler.
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *dosya;
	char kelime[30];
	while(1)
	{
		printf("Lutfen bir kelime giriniz:");
	    gets(kelime);
	    if(kelime[0]=='0')
	    {
	    	exit(1);
		}
		else
		{
			dosya=fopen("kelimeler.txt","a");
			if(dosya==NULL)
			{
				printf("Hata!!");
			}
			else
			{
				fprintf(dosya,"%s\n",kelime);
				fclose(dosya);
			}
		}
	}
}
*/






/*
#include<stdio.h>//Iki dosyadaki bilgileri okuyup, 3. dosyada birleþtirir
#include<string.h>
#include<stdlib.h>
int main()
{
	char karakter;
	FILE *d1,*d2,*d3;
	d1=fopen("bilgiler3.txt","r");
	d2=fopen("veriler.txt","r");
	d3=fopen("birlesik.txt","w");
	do
	{
		karakter=getc(d1);
		if(karakter!=EOF)
		{
			fprintf(d3,"%c",karakter);
		}
	}while(karakter!=EOF);
	do
	{
		karakter=getc(d2);
		if(karakter!=EOF)
		{
			fprintf(d3,"%c",karakter);
		}
	}while(karakter!=EOF);
	fclose(d1);
	fclose(d2);
	fclose(d3);
	printf("Birlesim islemi basarili.");
}
*/






/*
#include<stdio.h>//Konu.345.3
#include<string.h>
int main()
{
	int sayi;
	FILE *a,*b,*c;
	a=fopen("d1.txt","r");
	b=fopen("d2.txt","r");
	c=fopen("d3.txt","w");
	while(fscanf(a,"%d",&sayi)!=EOF)
	{
		fprintf(c,"%d\n",sayi);
	}
	while(fscanf(b,"%d",&sayi)!=EOF)
	{
		fprintf(c,"%d\n",sayi);	
	}
	fclose(a);
	fclose(b);
	fclose(c);
	printf("Dosya olusturuldu.");
	return 0;
}
*/








/*
#include<stdio.h>//Konu.346.4 EKSÝK
#include<string.h>
int main()
{
	char dizgi1[3][20],dizgi2[3][20],ad[10],soyad[10];
	int i=0,j=0,n,m;
	FILE *dos1,*dos2,*dos3;
	dos1=fopen("dosya1.txt","r");
	dos2=fopen("dosya2.txt","r");
	dos3=fopen("dosya3.txt","w");
	while(!feof(dos1))
	{
		fscanf(dos1,"%s%s\n",ad,soyad);
		strcat(dizgi1[i],ad);
		strcat(dizgi1[i]," ");
		strcat(dizgi1[i],soyad);
		strcat(dizgi1[i],"\0");
		i++;
	}
	
	while(!feof(dos2))
	{
		fscanf(dos2,"%s%s\n",ad,soyad);
		strcat(dizgi2[j],ad);
		strcat(dizgi2[j]," ");
		strcat(dizgi2[j],soyad);
		strcat(dizgi2[j],"\0");
		j++;
	}
	for(n=0;n<i;n++);
	{
		for(m=0;m<j;m++)
		{
			if(strcmp(dizgi1[n],dizgi2[m])==0)
			fprintf(dos3,"%s\n",dos1[n]);
		}
	}
	//fclose(dos1);
	//fclose(dos2);
	//fclose(dos3);
	return 0;
}
*/










/*
#include<stdio.h>//Dosyadaki sayýlarýn ortalamasýnýve en büyük sayýyý bastýrýr.//Konu.346.5
int main()
{
	int max=0,sayi,top=0,sayac=0;
	float ort;
	FILE *dosya=fopen("tamsayi.txt","r");
	while(fscanf(dosya,"%d",&sayi)!=EOF)
	{
        if(sayi>max)
        {
        	max=sayi;
		}
		top+=sayi;
		sayac++;
	}
	ort=1.0*top/sayac;
	printf("Dosyadaki sayilarin ortalamasi:%f\nDosyadaki en buyuk deger:%d",ort,max);
	fclose(dosya);
	return 0;
}
*/







/*
#include<stdio.h>//konu.346.6
int main()
{
	char isim[20];
	int Not;
	FILE *dosya=fopen("notlar.txt","r");
	while(fscanf(dosya,"%s%d",&isim,&Not)!=EOF)
	{
		if(Not>60)
		{
			printf("%s:%d puanla GECTI.\n",isim,Not);
		}
		else
		{
			printf("%s:%d puanla KALDI\n",isim,Not);
		}
	}
	fclose(dosya);
		return 0;
}
*/






/*
#include<stdio.h>//konu.346.7
#include<string.h>
struct sirket
{
	int satisno,tutar;
	char ad[20];
};
int main()
{
	FILE *dosya=fopen("sirket.txt","w");
	int n,i,top=0;
	float ort;
	char enter;
	printf("Kac adet calisan bilgisi gireceksiniz?");
	scanf("%d",&n);
	scanf("%c",&enter);
	struct sirket calisan[n];
	for(i=0;i<n;i++)
	{
		printf("%d. Calisan adini giriniz:",i+1);
		gets(calisan[i].ad);
		printf("%s isimli calisanin satis eleman numarasi ve yillik satis tutarini giriniz.",calisan[i].ad);
		scanf("%d%d",&calisan[i].satisno,&calisan[i].tutar);
		scanf("%c",&enter);
		top+=calisan[i].tutar;
	}
	ort=1.0*top/n;
	for(i=0;i<n;i++)
	{
		fprintf(dosya,"%d nolu %s; toplam %d miktar satis yapmistir.\n",calisan[i].satisno,calisan[i].ad,calisan[i].tutar);
	}
	fprintf(dosya,"Toplam satis miktari=%d\nOrtalama satis miktari=%f",top,ort);
	printf("Calisan bilgileri dosyaya basariyla kaydedildi.");
	fclose(dosya);
	return 0;
}
*/







/*
#include<stdio.h>//Konu.347.8
#include<string.h>
int main()
{
	int puan;
	char ad[20];
	FILE *nots,*gecti,*kaldi;
	nots=fopen("notlar.txt","r");
	gecti=fopen("gecenler.txt","w");
	kaldi=fopen("kalanlar.txt","w");
	while(fscanf(nots,"%s%d",&ad,&puan)!=EOF)
	{
		if(puan>60)
		fprintf(gecti,"%s:(%d puanla) GECTI.\n",ad,puan);
		else
		fprintf(kaldi,"%s:(%d puanla) KALDI.\n",ad,puan);
	}
	printf("Bilgiler dosyaya basariyla kaydedildi.");
	fclose(nots);
	fclose(gecti);
	fclose(kaldi);
}
*/






/*
#include<stdio.h>//Soru.183.11
#include<string.h>
int main()
{
	FILE *dos=fopen("IP.txt","r");
	int s,sure;
	char ip[30];
	printf("Sureyi giriniz:");
	scanf("%d",&s);
	while(!feof(dos))
	{
		fscanf(dos,"%s%d",&ip,&sure);
		if(s<sure)
		printf("%s\n",ip);
	}
	feof(dos);
}
*/





/*
#include<stdio.h>//Soru.183.12
int main()
{
	FILE *oku,*yaz;
	oku=fopen("sayilar.txt","r");
	yaz=fopen("cikti.txt","w");
	int s1,s2,buyuk;
	while(!feof(oku))
	{
		fscanf(oku,"%d%d",&s1,&s2);
		if(s1>s2)
		{
			fprintf(yaz,"%d\n",s1);
			fscanf(yaz,"%d",&s2);
		    printf("%d\n",s1);
		}
		else if(s2>s1)
		{
			fprintf(yaz,"%d\n",s2);
			fscanf(yaz,"%d",&s2);
		    printf("%d\n",s2);
		}
	}
	fclose(oku);
	fclose(yaz);
	return 0;
}
*/






/*
#include<stdio.h>//Soru.183.13.
#include<string.h>
struct sinif
{
	int boy;
	char adsoyad[20];
}ogrenci[50];
int main()
{
	
	FILE *dos=fopen("uzun.txt","w");
	int i,x,top=0;
	float boyort;
	char enter;
	printf("Sinifta kac ogrenci var?");
	scanf("%d",&x);
	scanf("%c",&enter);
	for(i=0;i<x;i++)
	{
		printf("%d. ogrenci ad-soyadi:",i+1);
		gets(ogrenci[i].adsoyad);
		printf("%s isimli ogrencinin boy uzunlugu(cm cinsinden):",ogrenci[i].adsoyad);
		scanf("%d",&ogrenci[i].boy);
		scanf("%c",&enter);
		fprintf(dos,"%-20s%4d\n",ogrenci[i].adsoyad,ogrenci[i].boy);
		top+=ogrenci[i].boy;
	}
	boyort=top*1.0/x;
	fclose(dos);
	printf("OGRENCI BILGILERI KAYDEDILDI.\n");
	dos=fopen("uzun.txt","r");
	printf("Boy Ortalamasi:%f\n",boyort);
	printf("Boy ortalamasinin ustundeki ogrenciler:\n");
	for(i=0;i<x;i++)
	{
		if(ogrenci[i].boy>boyort)
		printf("%s : %d\n",ogrenci[i].adsoyad,ogrenci[i].boy);
	}
	fclose(dos);
	return 0;
	
}
*/






/*
#include<stdio.h>//Soru.184.14
#include<string.h>
int main()
{
	int i=0,uz,sayi;
	char kel[15],kelime[10][15];
	FILE *oku=fopen("kelime.txt","r");
	FILE *yaz=fopen("uzun.txt","w");
	while(!feof(oku))
	{
		fscanf(oku,"%s",&kelime[i]);
		uz=strlen(kelime[i]);
		fprintf(yaz,"%s\t%d\n",kelime[i],uz);
	}
	printf("Pozitif bir sayi giriniz:");
	scanf("%d",&sayi);
	fclose(yaz);
	yaz=fopen("uzun.txt","r");
	while(!feof(yaz))
	{
		fscanf(yaz,"%s%d",&kel,&uz);
		if(uz>sayi)
		printf("%s\n",kel);
	}
	fclose(oku);
	fclose(yaz);
}
*/






/*
#include<stdio.h>//Soru.184.15
#include<string.h>
int main()
{
	int i,space=0;
	FILE *oku=fopen("karma.txt","r");
    FILE *yaz=fopen("duzgun.txt","w");
    char dizgi[80];
    fgets(dizgi,81,oku);
    for(i=0;dizgi[i]!='\0';i++)
    {
    	fprintf(yaz,"%c",dizgi[i]);
    	if(dizgi[i]==' ')
    	space++;
    	if(dizgi[i]==' '&&space%2==0)
    	fprintf(yaz,"\n");
	}
    printf("Bilgiler duzgun.txt dosyasina yazdirildi.");
}
*/






/*
#include<stdio.h>//Soru.184.16
#include<string.h>
int main()
{
	int i,ac,kapa;
	char dizgi[60];
	FILE *oku=fopen("ifade.txt","r");
	FILE *yaz=fopen("cikti.txt","w");
	while(!feof(oku))
	{
		ac=kapa=0;
		fgets(dizgi,60,oku);
		for(i=0;i<strlen(dizgi);i++)
		{
			if(dizgi[i]=='(')
			ac++;
			else if(dizgi[i]==')')
			kapa++;
		}
		if(ac==kapa)
		fprintf(yaz,"%s",dizgi);
	}
	fclose(oku);
	fclose(yaz);
	return 0;
}
*/






/*
#include<stdio.h>//Girilen cumleyi sifreler.
#include<string.h>//Soru.185.18
void sifre(char cumle[80]);
int main()
{
	char dizgi[80];
	int i;
	FILE *oku,*yaz;
	oku=fopen("yazi.txt","r");
	yaz=fopen("sifre.txt","w");
	while(!feof(oku))
	{
		fgets(dizgi,81,oku);
		sifre(dizgi);
		fprintf(yaz,"%s\n",dizgi);
		printf("%s\n",dizgi);
	}
	fclose(oku);
	fclose(yaz);
	return 0;
}
void sifre(char cumle[80])
{
	int i;
	for(i=0;i<strlen(cumle);i++)
	{
		if('A'<=cumle[i]&&cumle[i]<='Z'||'a'<=cumle[i]&&cumle[i]<='z')
		{
			if(cumle[i]=='z')
			cumle[i]='a';
			else if(cumle[i]=='Z')
			cumle[i]='A';
			else
			cumle[i]+=1;
		}
	}
}
*/






/*
#include<stdio.h>
#include<string.h>
int main()
{
	int ogrno,fogrno,sinif,fsinif,i,secim;
	char adsoyad[20],fadsoyad[20],enter;
	FILE *dos;
	do
	{
		dos=fopen("ogrenci (2).txt","r");
		printf("1.Numara\n2.Ad ve Soyad\n3.Sinif\n4.Cikis\nSeciminiz(1, 2, 3, 4):");
		scanf("%d",&secim);
		scanf("%c",&enter);
		switch(secim)
		{
			case 1:
			printf("Ogrenci numarasini giriniz:");
			scanf("%d",&ogrno);
			while(!feof(dos))
			{
				fscanf(dos,"%d%d",&fogrno,&fsinif);
				scanf("%c",&enter);
				fgets(fadsoyad,21,dos);
				if(ogrno==fogrno)
				{
					printf("Sinif:%d\nAdSoyad:%s\n",fsinif,fadsoyad);
					break;
				}
			}
			break;
			case 2:
			printf("Ogrenci Ad Soyadini giriniz:");
			gets(adsoyad);
			while(!feof(dos))
			{
				fscanf(dos,"%d%d",&fogrno,&fsinif);
				scanf("%c",&enter);
				fgets(fadsoyad,21,dos);
				if(strncmp(fadsoyad,adsoyad,strlen(adsoyad))==0)
				{
					printf("No:%d\nSinif:%d\n",fogrno,fsinif);
					break;
				}
			}
			break;
			case 3:
			printf("Sinif giriniz:");
			scanf("%d",&sinif);
			while(!feof(dos))
			{
				fscanf(dos,"%d%d",&fogrno,&fsinif);
				scanf("%c",&enter);
				fgets(fadsoyad,21,dos);
				if(sinif==fsinif)
				{
					printf("no:%d\tsinif:%d\tadsoyad:%s\n",fogrno,fsinif,fadsoyad);
					break;
				}
		    }
			break;	
		}
		fclose(dos);
	}while(secim!=4);	
}
*/




/*
#include<stdio.h>
#include<string.h>
int main()
{
	FILE *dos=fopen("sayilar (2).txt","r");
	FILE *yaz=fopen("sirali.txt","w");
	int i,b,j,tamsayi[100],buyuk;
	for(i=0;!feof(dos);i++)
	fscanf(dos,"%d",tamsayi[i]);
	for(i=0;!feof(dos);i++)
	{
		b=0;
		buyuk=tamsayi[0];
		for(j=1;!feof(dos);j++)
		{
			if(tamsayi[j]>buyuk)
			{
				b=j;
				buyuk=tamsayi[j];
			}
		}
		fprintf(yaz,"%d\n",buyuk);
		tamsayi[b]=0;
	}	
}
*/








































































































