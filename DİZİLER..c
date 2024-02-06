/*
#include<stdio.h>//Dizi kullanmadan 100 öðrencinin not ortalamasýný hesaplar.
int main()
{
	int sayac=1,nots,topnot=0;
	printf("%d. notu giriniz: ",sayac);
	scanf("%d",&nots);
	sayac++;
	topnot+=nots;
	do
	{
		printf("%d. notu giriniz: ",sayac);
		scanf("%d",&nots);
		topnot+=nots;
		sayac++;
	}while(sayac<=100);
	printf("ogrenci ortalamasi: %f",topnot/(sayac*1.0));
  
}
*/


/*
#include<stdio.h>//100 öðrencinin ortalamasýný hesaplar.
int main()
{
	
	int i,top=0;
	int nots[i];
	for(i=1;i<=10;i++)
	{
		printf("%d. ogrenci notu: ",i);
		scanf("%d",&nots[i]);
		top+=nots[i];
	}
	i--;
	printf("ortalama: %f",top/(i*1.0));
}
*/




/*
#include<stdio.h>//1 ile 100 arasýndaki sayýlardan ilk ve son terimin karelerini hesaplar.
int main()
{
	int i,diz[100];
	for(i=1;i<=100;i++)
	{
		diz[i]=i*i;
	}
	printf("ilk deger:%d  son deger=%d",diz[0],diz[100]);
	return 0;
}
*/




/*
#include<stdio.h>//KULLANICIDAN ALINAN BEÞ TAMSAYININ ORTALAMASINI HESAPLAR.
int main()
{
	int i,diz[5];
	int top=0;
	double ort;
	printf("bes tamsayi gir: ");
	for(i=0;i<5;i++)
	{
	    scanf("%d",&diz[i]);
	    top+=diz[i];
    }
    ort=1.0*top/5;
    printf("ortalama=%lf",ort);
    return 0;
}
*/





/*
#include<stdio.h>//NEGATÝF SAYI GÝRÝLENE KADAR MAX 30 SAYININ ORTALAMASINI HESAPLAR.
int main()
{
	int i=0,diz[30],top=0;
	double ort;
	printf("sayi giriniz: \n");
	scanf("%d",&diz[i]);
	while(diz[i]>0)
	{
		top+=diz[i];
		i++;
		scanf("%d",&diz[i]);
		
	}
	ort=(double)top/(i);
	printf("ortalama = %f",ort);
	return 0;	
}
*/





/*
#include<stdio.h>//KULLANICIDAN ALDIÐI BEÞ TAMSAYIYI TEK VE ÇÝFT DÝYE AYIRIR.
void bul(int a);
int main()
{
	int diz[5],i;
	printf("5 tamsayi girin: ");
	for(i=0;i<=4;i++)
		scanf("%d",&diz[i]);
	for(i=0;i<=4;i++)
	    bul(diz[i]);
	
}
void bul(int a)
{
	if(a%2==0)
	printf("%d cift sayidir.\n",a);
	else
	printf("%d tek sayidir.\n",a);	
}
*/






/*
#include<stdio.h>//KULLANICIDAN ALINAN BEÞ DEÐERDEN EN BÜYÜÐÜNÜ GÖSTERÝR.
void maks(int a[],int n);
int main()
{
	int k[5],i;
	printf("bes tamsayi giriniz: ");
	for(i=0;i<5;i++)
	scanf("%d",&k[i]);
	maks(k,5);
	return 0;
}
void maks(int a[],int n)
{
	int m,i;
	m=a[0];
	for(i=1;i<n;i++)
	if(a[i]>m)
	m=a[i];
	printf("dizinin maks degeri :%d",m);
}
*/






/*
#include<stdio.h>// 30 ÖÐRENCÝNÝN GÝRDÝÐÝ 3 SINAVIN AYRI AYRI ORTALAMALIRINI GÖSTERÝR.
int main()
{
	int sinav[30][3],i,j,top;
	double ort;
	for(i=0;i<30;i++)
	{
		printf("%d. ogrenci notlari: ",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&sinav[i][j]);
		}
	}
	for(j=0;j<3;j++)
	{
		top=0;
		for(i=0;i<30;i++)
		top+=sinav[i][j];
		ort=top/30.0;
		printf("%d. sinav ortalamasi: %f\n",j+1,ort);
	}
}
*/






#include<stdio.h>//KÖÞEGEN MATRÝS BASTIRIR.
int main()
{
	int diz[10][10],i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==j)
			diz[i][j]=1;
			else
			diz[i][j]=0;
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		printf("%5d",diz[i][j]);
		printf("\n");
	}
}







/*
#include<stdio.h>//3 SINAVA GÝREN 30 ÖÐRENCÝNÝN AYRI AYRI ORTALAMALIRINI GÖSTERÝR.
int main()
{
	int diz[30][3],i,j,top;
	double ort;
	for(i=0;i<30;i++)
	{
		printf("%d. ogrencinin notlari: ",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&diz[i][j]);
		}
	}
	for(i=0;i<30;i++)
	{
		top=0;
		for(j=0;j<3;j++)
		{
			top+=diz[i][j];
		}
		ort=top/3.0;
		printf("%d. ogrencinin ortalamasi=%f\n",i,ort);
	}
}
*/





/*
#include<stdio.h>//KULLANICIDAN ALDIGI N TANE TAM SAYIYI TEK VE CÝFT DÝYE AYIRIR.
int main()
{
	int diz[100],i,n;
	printf("kac sayi gireceksiniz?");
	scanf("%d",&n);
	printf("Sayilari giriniz: ");
	for(i=0;i<n;i++)
	scanf("%d",&diz[i]);
	printf("Tek sayilar:");
	for(i=0;i<n;i++)
	{
		if(diz[i]%2==1)
		printf("%4d",diz[i]);
	}
	printf("\n\n");
	printf("Cift sayilar: ");
	for(i=0;i<n;i++)
	{
		if(diz[i]%2==0)
		printf("%4d",diz[i]);
	}

}
*/








/*
#include<stdio.h>//BÝR SINAVDAKÝ EN YUKSEK VE EN DUSUK NOTLARI YAZDIRIR.
int main()
{
	int dizno[100],diznot[100],mevcut,i,minno,maxno,minnot,maxnot;
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
#include<stdio.h>//GÝRÝLEN SAYÝLARÝ BÝR BASAMAK SAÐA KAYDIRIR. ÖRNEK:12 23 34 45 --> 45 12 23 34 olur.
int main()
{
	int a[100],n,i,gec;
	printf("Pozitif bir tamsayi giriniz: ");
	scanf("%d",&n);
	printf("%d adet sayi giriniz: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    gec=a[n-1];
	for(i=n-1;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=gec;
	printf("olusturulan dizi:");
	for(i=0;i<n;i++)
	printf("%3d",a[i]);
	return 0;
}
*/







/*
#include<stdio.h>//ÝKÝ NOKTA ARASI MESAFEYÝ HESAPLAR.
#include<math.h>
int main()
{
	int x[10],y[10],i,n,top=0;
	double mesafe;
	printf("Boyutu giriniz: ");
	scanf("%d",&n);
	printf("x noktasini giriniz: ");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	printf("y noktasini giriniz: ");
	for(i=0;i<n;i++)
	scanf("%d",&y[i]);
	for(i=0;i<n;i++)
	top+=pow((x[i]-y[i]),2);
	mesafe=sqrt(top);
	printf("mesafe : %f",mesafe);	
}
*/






/*
#include<stdio.h>//ÝKÝ NOKTA ARASININ FOMKSÝYON KULLANARAK BULUR.
#include<math.h>
float fonk(int n,int x[10],int y[10]);
int main()
{
	int i,x[10],y[10],n;
	printf("Boyutu giriniz: ");
	scanf("%d",&n);
	printf("x noktasini giriniz: ");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	printf("y noktasini giriniz: ");
	for(i=0;i<n;i++)
	scanf("%d",&y[i]);
	printf("mesafe: %f",fonk(n,x,y));
}
float fonk(int n,int x[10],int y[10])
{
	double mesafe;
	int top=0,i;
	for(i=0;i<n;i++)
	top+=pow((x[i]-y[i]),2);
	mesafe=sqrt(top);
	return (mesafe);
}
*/








/*
#include<stdio.h>//KÝTAP KONTROL HANESÝNÝ (ÝSBN) BULUR.
int isbn(int isbn[10]);
int main()
{
	int k[10],i;
	for(i=0;i<9;i++)
	{
		printf("%d. haneyi giriniz: ",i+1);
		scanf("%d",&k[i]);
	}
	printf("kontrol hanesi: %d",isbn(k));
}
int isbn(int isbn[10])
{
	int i,kontrol,top=0;
	for(i=0;i<10;i++)
	{
		top+=(i+1)*isbn[i];
	}
	kontrol=top%11;
	return kontrol;
}
*/








/*
#include<stdio.h>//KARE MATRÝSTE MAJOR VE MÝNOR DÝZÝ OLUÞTURUR.
int main()
{
	int i,j,n,matris[10][10];
	printf("kosegen uzunlugunu giriniz: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    matris[i][j]=0;
	
	for(i=0;i<n;i++)
	{
		matris[i][i]=1;
		matris[i][n-i-1]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	    printf("%3d",matris[i][j]);
	    printf("\n");
	}
        return 0;
}
*/







/*
#include<stdio.h>//KULLANICIDAN ALINAN TAMSAYILARDAN TEK OLANLARI BASTIRIR.
void f(int a[][10],int n,int b[],int *p);
int main()
{
	int x[10][10],b[100];
	int n,i,j,k;
	printf("pozitif bir sayi giriniz: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Matrisin %d. satir elemanlarini giriniz: ",i+1);
		for(j=0;j<n;j++)
		scanf("%d",&x[i][j]);
	}
	f(x,n,b,&k);
	printf("olusturulan dizi: ");
	for(i=0;i<k;i++)
	printf("%3d",b[i]);
	return 0;
}
void f(int a[][10],int n,int b[],int *p)
{
	int i,j,k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		if(a[i][j]%2==1)
		{
		b[k]=a[i][j];
		k++;
	    }
	}
	*p=k;
}
*/







/*
#include<stdio.h>//SORU.121.25
void kucukBuyuk(int n,int x[],int rakam,int y[][20]);
int main()
{
	int n,x[20],rakam,i,j;
	int y[2][20];
	printf("Dizi boyutunu giriniz (n<=20):");
	scanf("%d",&n);
	printf("Dizi elemanlarini giriniz: ");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	printf("Bir tamsayi giriniz: ");
	scanf("%d",&rakam);
	kucukBuyuk(n,x,rakam,y);
	for(i=0;i<2;i++)
	{
	for(j=0;j<n;j++)
	printf("%3d",y[i][j]);
	printf("\n");
    }
}
void kucukBuyuk(int n,int x[],int rakam,int y[][20])
{
	int i,j=0,k=0;
	for(i=0;i<n;i++)
	{
		y[0][i]=0;
		y[1][i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(x[i]>rakam)
		y[0][j++]=x[i];
		else
		y[1][k++]=x[i];
	}
}
*/





/*
#include<stdio.h>//KONU.259.11
int main()
{
	int i,m,a[10],x,yeni[10],k=1;
	printf("M giriniz: ");
	scanf("%d",&m);
	printf("%d adet sayi giriniz: ",m);
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	printf("bir tamsayi giriniz:");
	scanf("%d",&x);
	int j=0;
	for(i=0;i<m;i++)
	{
		if(a[i]!=x)
		{
		yeni[j]=a[i];
		k++;	
		j++;
	    }
	    else
	    k--;
	}
	for(i=0;i<k;i++)
	printf("%3d",yeni[i]);
}
*/






/*
#include<stdio.h>//MxM'LÝK DÝZÝNÝN ÝLK SATIRI ÝLE SON SATIRININ YERÝNÝ DEGÝSTÝRÝR.
int main()
{
	int m,geci,gecs,a[10][10],i,j;
	printf("m giriniz: ");
	scanf("%d",&m);
	printf("%dx%d dizi giriniz: ",m,m);
	for(i=0;i<m;i++)
	for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);
	printf("Dizinin ilk hali:\n\n");
	for(i=0;i<m;i++)
	{
	for(j=0;j<m;j++)
	printf("%3d",a[i][j]);
	printf("\n");
    }
	for(j=0;j<m;j++)
	{
		geci=a[0][j];
		gecs=a[m-1][j];
		a[m-1][j]=geci;
		a[0][j]=gecs;
	}
	printf("\n\nyeni dizi:\n\n");
	for(i=0;i<m;i++)
	{
	for(j=0;j<m;j++)
	printf("%3d",a[i][j]);
	printf("\n");
    }
}
*/







/*
#include<stdio.h>//MÜKEMMEL SAYI KONTROLÜ.
void muk(int n,int ilk[30],int son[30]);
int main()
{
	int i,n,ilk[30],son[30];
	printf(" dizi buyuklugunu giriniz: ");
	scanf("%d",&n);
	printf("Dizi elemanlarini giriniz: ");
	for(i=0;i<n;i++)
	scanf("%d",&ilk[i]);
	muk(n,ilk,son);
	printf("mukemmel sayi sonuclari:");
	for(i=0;i<n;i++)
	printf("%3d",son[i]);
	return 0;
}
void muk(int n,int ilk[30],int son[30])
{
	int num,top=0,i,j=0;
	for(i=0;i<n;i++)
	{
		top=0;
		for(num=1;num<ilk[i];num++)
		{
		if(ilk[i]%num==0)
		top+=num;
	    }
	    if(top==ilk[i])
		son[j++]=1;
		else
		son[j++]=0;
	}
}
*/






/*
#include<stdio.h>//10x2 Girilen dizide satýr ve sütunun ortalamasýný bastýrýr.//261.14
int main()
{
	float a[10][2],satirort[10],sutunort[1][2];
	int i,j,k=0,top0=0,top1=0;
	printf("dizi elemanlarini giriniz: ");
	for(i=0;i<10;i++)
	for(j=0;j<2;j++)
	scanf("%f",&a[i][j]);//a dizisi elemanlarý girilir.
	
	for(i=0;i<10;i++)
	satirort[k++]=(a[i][0]+a[i][1])/2.0;//satýrort dizisini bulur.
	
	for(i=0;i<10;i++)//Birinci sütun ve ikinci sütun toplamlarýný bulur.
	{
		top0+=a[i][0];
		top1+=a[i][1];
	}
	sutunort[0][0]=top0/10.0;
	sutunort[0][1]=top1/10.0;
	//Yazdýrma iþlemleri..
	printf("   a dizisi\n\n");
	for(i=0;i<10;i++)
	{
	    for(j=0;j<2;j++)
	    printf("%2.1f\t",a[i][j]);
	    printf("\n");
    }
    printf("\n\n");
	printf("   Satir Ortalamasi\n\n");
	for(i=0;i<10;i++)
	printf("     %2.1f\n",satirort[i]);
	printf("\n\n");
	printf("   Sutun Ortalamasi\n\n");
	printf("%2.1f        %2.1f",sutunort[0][0],sutunort[0][1]);
}
*/

























































































