//bir say�n�n karesini alan programd�r
#include<stdio.h>
//burda a global de�i�ken olarak yer al�r

	int a;
	
int main(){
	kare();
	carpma();
}
int kare(){
	printf("karesini almak istediginiz sayiyi giriniz");
	scanf("%d",&a);
	int kare=a*a;
	printf("kare alma islem soucu %d \n",kare);
}

int carpma(){
//be burada yerel de�i�ken olarak yer al�r ve carpma fonksiyonun d���nda kullan�lamaz
	int b;
	int carpim=0;
	printf("carpmak ised�iniz iki say�y� giriniz : ");
	scanf("%d%d",&a,&b);
	carpim=a*b;
	printf("carp�m isleminin sonucu %d",carpim);
}
