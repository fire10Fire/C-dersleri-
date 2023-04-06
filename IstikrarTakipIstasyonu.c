#include<Stdio.h>
int main(){
	printf("Ýstikrar takip istasyonuna hoþgeldiniz");
	int fark,top=0,bA=1,sA,bG=10,sG,aydaGun,top2=0;
	printf("bugunun ay ve gununu yazýnýz\n");
	scanf("%d%d",&sA,&sG);
	fark=sG-bG;
	
	for(;bA<sA;bA++){
		switch(bA){
			case 1:
				aydaGun=31;
				break;
			case 2:
				aydaGun=28;
				break;
			case 3:
				aydaGun=31;
				break;
			case 4:
				aydaGun=30;
				break;
			default:
				printf("Yanlis giris yaptiniz tekrar giriniz");
				break;
		}
		top2+=aydaGun;
	} 
	top=top2+fark;
	printf("%d : gunluk istikrar!",top);
	
	
}
