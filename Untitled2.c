//bir say�n�n karesini alan programd�r
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
	printf("carpmak ised�iniz iki say�y� giriniz : ");
	scanf("%d%d",&a,&b);
	carpim=a*b;
	printf("carp�m isleminin sonucu %d",carpim);
}
