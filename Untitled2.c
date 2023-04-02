//bir sayýnýn karesini alan programdýr
#include<stdio.h>
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
	int b;
	int carpim=0;
	printf("carpmak isedðiniz iki sayýyý giriniz : ");
	scanf("%d%d",&a,&b);
	carpim=a*b;
	printf("carpým isleminin sonucu %d",carpim);
}
