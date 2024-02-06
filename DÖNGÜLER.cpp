/*
#include <stdio.h>//GÝRÝLEN ON SAYININ TOPLAMNINI BULUR.
int main()//KONU.122
{
	int i;
	float toplam,reelsayi;
	i=1;
	toplam=0.0;
	while(i<=10)
	{
	printf("%d. sayiyi giriniz: ",i);
	scanf("%f",&reelsayi);
		if(reelsayi>0)
		toplam=toplam+reelsayi;
		i++;
	}
	printf("toplam: %6.2f",toplam);
	
	
	return(0);
}
*/






/*
#include <stdio.h>//GÝRÝLEN SAYILARDAN KAÇININ POZÝTÝF,NEGATÝFSIFIR OLDUÐUNU BULUR.
int main()
{
	int pos=0,neg=0,sifir=0,n,sayi,i;
	printf("Kac tane sayi gireceksiniz: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d. sayi: ",i);
		scanf("%d",&sayi);
		if(sayi>0)
		  pos++;
		else if(sayi<0)
		  neg++;
		else 
		  sifir++;
	}
	printf("%d pozitif sayi.\n",pos);
	printf("%d negatif sayi.\n",neg);
	printf("%d sifir sayi.",sifir);
	return(0);
	
}
*/





/*
#include <stdio.h>//GÝRÝLEN SAYILARDAN EN BÜYÜÐÜNÜ BASTIRIR.
int main()//KONU.140
{
	int i,sayi,max=0;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	for(i=1;sayi>0;i++)
	{
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
		if(sayi>max)
		max=sayi;
	}
	printf(" Girilen %d sayidan en buyugu: %d",i,max);
	return(0);
}
*/











/*
#include <stdio.h>//SAYILARLA UCGEN OLUSTURUR.
int main()//KONU.148
{
	int i,j;
	for(i=1;i<=8;i++)
	{
	for(j=i;j>=1;j--)
	printf("%3d",j);
	printf("\n");
	}
	return(0);
}
*/




/*
#include <stdio.h>//BÝR ÝLE N ARASINDAKÝ ASAL SAYILARI BASTIRIR
int main()//KONU.149
{
	int n;
	int num,i,bayrak;
	printf("Pozitif bir sayi giriniz: ");
	scanf("%d",&n);
	printf("1-%d arasindaki butun asal sayilar: ",n);
	for(num=2;num<=n;num+=1)
	{
		bayrak=1;
		i=2;
		while((i<num)&&(bayrak==1))
		{
			if((num%i)==0)
			bayrak=0;
			i+=1;
		}
		if(bayrak==1)
		printf("%4d",num);
	}
	return(0);
}
*/






/*
#include <stdio.h>//SAYILARIN TOPLAMINI VE ORTALAMSINI HESAPLAR.
int main()//KONU.153
{
	int i=1,sayi;
	float toplam=0;
	while(1)
	{
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		if(sayi<0)
		continue;
		if(sayi>0)
		{
			toplam+=sayi;
			i++;
		}
		if(sayi==0)
		break;
	}
	printf("sayilar toplami: %.2f\n",toplam);
	printf("sayilarin ortalamasi:%.2f",toplam/(i-1)); 
	return(0);
}
*/





/*
#include <stdio.h>
int main(void)
{
	int i,n,num,bayrak;
	printf("n sayisini giriniz: ");
	scanf("%d",&n);
	printf("----------------------\n");
	for(num=2;num<=n;num++)
	{
		bayrak=1;
		i=2;
		while((i<num)&&(bayrak==1))
		{
			if((num%i)==0)
			bayrak=0;
			i++;
		}
		if(bayrak==1)
		printf("%3d",num);
	}
	return 0;
}
*/


/*
#include <stdio.h>//Kare ve Daire Alaný Hesaplar.
#define PI 3.14
int main()
{
	int cevap;
	double a,r,alan;
	
	do
	{
		//Kullanýcý seçimi
		printf("Kare:1\n");
		printf("Daire:2\n");
		printf("Bitir:3\n");
		printf("Seceneginiz: \n ");
		scanf("%d",&cevap);
		
		switch(cevap)
		{
			case 1: printf("Karenin kenar uzunlugu: ");
			        scanf("%lf",&a);
			        alan=a*a;
			        printf("Karenin alani: %4.2lf\n",alan);
			        break;
			case 2: printf("Dairenin yaricap uzunlugu: ");
			        scanf("%lf",&r);
					alan=PI*r*r;
					printf("Dairenin alani: %4.2lf\n",alan);          
		}
	}
	while(cevap!=3);
	printf("alan hesaplama iþlemini bitirdiniz.");
	return(0);
}
*/






/*
#include <stdio.h>//Fibonacci dizisi..
int main(void)
// fibonacci dizisi
{
	int a,b,c,i;
	a=1;
	b=1;
	printf("%d\n",a);
	printf("%d\n",b);	
	for(i=1;i<=17;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);	
	}	return(0);
}
*/






/*
#include <stdio.h>// kullanýcýdan alýnan üç basamaklý sayýyý basamaklarýna ayýran program.
int  main()
{
	int sayi;
	printf("3 basamakli sayi giriniz: ");
	scanf("%d",&sayi);
	printf("%d\n",sayi%10);
	printf("%d\n",((sayi%100)-(sayi%10))/10);
	printf("%d",sayi/100);
return(0);
}
*/





/*
#include<stdio.h>//konu.130
int main()
{
	int sayi,max=0;
	printf("sayi gir:");
	scanf("%d",&sayi);
	while(sayi>0)
	{
		if(sayi>max)
		max=sayi;
	    printf("sayi gir:");
	    scanf("%d",&sayi);
		
	}
	printf("En buyuk sayi: %d",max);
	return 0;
}
*/





/*
#include<stdio.h>//konu.138
int main()
{
	int neg=0,poz=0,sifir=0,i,adet,sayi;
	printf("Kac adet sayi gireceksiniz:");
	scanf("%d",&adet);
	for(i=0;i<adet;i++)
	{
		printf("%d. sayi:",i+1);
		scanf("%d",&sayi);
		if(sayi>0)
		poz++;
		else if(sayi<0)
		neg++;
		else
		sifir++;
	}
	printf("%d tane pozitif.\n",poz);
	printf("%d tane negatif.\n",neg);
	printf("%d tane sifir.\n",sifir);
	return 0;
}
*/






/*
#include<stdio.h>
int main()
{
	int num,n,i,bayrak;
	printf("Pozitif bir tamsayi giriniz:");
	scanf("%d",&n);
	printf("1-%d arasindaki asal sayilar:\n----------------------\n",n);
	for(num=2;num<n;num++)
	{
		bayrak=1;
		i=2;
		while((i<num)&&(bayrak==1))
		{
			if(num%i==0)
			bayrak=0;
			i++;
		}
		if(bayrak==1)
		printf("%4d",num);
	}
	return 0;
}
*/







/*
#include<stdio.h>
int main()
{
	int i=0,sayi,top=0;
	float ort;
	do
	{
		printf("Bir tamsayi giriniz:");
		scanf("%d",&sayi);
		if(sayi<0)
		{
			continue;
		}
		if(sayi>0)
		{
			i++;
			top+=sayi;
		}
		if(sayi==0)
		break;
	}while(1);
	printf("Toplam=%d\n",top);
	printf("Ortalama=%f",((double)top)/i);
	return 0;
}
*/







/*
#include<stdio.h>
int main()
{
	int i,j;
	float toptek=0,topcift=0;
	for(i=1;i<10;i=i+2)
	{
		toptek+=1/(i*1.0);
	}
	for(i=2;i<=10;i+=2)
	{
		topcift+=1/(i*1.0);
	}
	printf("%f\n",toptek);
	printf("%lf",toptek-topcift);
	return 0;
}
*/




/*
#include<stdio.h>//fibonacci serisi
int main()
{
	int fib1=1,fib2=1,fibyeni,sayac;
	printf("%3d%3d",fib1,fib2);
	sayac=2;
	while(sayac<=20)
	{
		fibyeni=fib1+fib2;
		printf("%6d",fibyeni);
		fib1=fib2;
		fib2=fibyeni;
		sayac++;
	}
	return 0;
	
}
*/






/*
#include<stdio.h>//Asal
int main()
{
	int i,num,bayrak,m,n;
	printf("m ve n giriniz:");
	scanf("%d%d",&m,&n);
	for(num=m+1;num<n;num++)
	{
		bayrak=1;
		i=2;
		while((bayrak==1)&&(i<num))
		{
			if(num%i==0)
			bayrak=0;
			i++;
		}
		if(bayrak==1)
		printf("%3d",num);
	}
	return 0;
}
*/






/*
#include<stdio.h>//Soru.54.17
#include<math.h>
int main()
{
	int n,i;
	float x,seri=0;
	printf("Pozitif tamsayi:");
	scanf("%d",&n);
	printf("Reel sayi:");
	scanf("%f",&x);
	for(i=1;i<=(2*n-1);i+=2)
	{
		seri+=(1.0*i)/(pow(x,i+1));
	}
	printf("Seri: %.2f",seri);
	return 0;
}
*/







/*
#include<stdio.h>//Soru.56.19
#include<math.h>
int main()
{
	int no,boy,minno,minboy,fark;
	printf("Ogrenci no::");
	scanf("%d",&no);
	printf("Ogrenci boy:");
	scanf("%d",&boy);
	fark=abs(150-boy);
    minno=no;
	minboy=boy;
	do
	{
		printf("Ogrenci no:");
	    scanf("%d",&no);
	    printf("Ogrenci boy:");
	    scanf("%d",&boy);
	    if(abs(150-boy)<fark)
	    {
	    	fark=abs(150-boy);
	    	minno=no;
	    	minboy=boy;
		}
	}while(no>0);
	printf("%d nolu ogrenci %dcm. boyuyla 150ye en yakin.",minno,minboy);
	return 0;
}
*/







/*
#include<stdio.h>
int main()
{
	int sayac=0,sayi,carpim=1;
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	while(sayi>9)
	{
		while(sayi)
		{
			carpim*=sayi%10;
			sayi/=10;
		}
		sayi=carpim;
		carpim=1;
		sayac++;
		printf("%d.sayi : %d\n",sayac,sayi);
	}
	return 0;
}
*/

























































































































