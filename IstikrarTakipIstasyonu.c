#include<Stdio.h>
int main(){
	printf("Ýstikrar takip istasyonuna hoþgeldiniz\nkac numarali istikrari gormek istersiniz");
	int anahtar;
	scanf("%d",&anahtar);
	int ilkFark,top=0,bA,sA,bG,sG,aydaGun,top2=0;
	
	switch(anahtar){
	
	case 9 :
	bA=1;
	bG=10;
	printf("bugunun ay ve gununu yazýnýz\n");
	scanf("%d%d",&sA,&sG);

	
	for(;bA<sA-1;bA++){
		switch(bA+1){
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
		} // ne olmus burda
		top2+=aydaGun;
	} 
	switch(bA){
			case 1:
				aydaGun=31;ilkFark=aydaGun-bG;
				break;
			case 2:
				aydaGun=28;ilkFark=aydaGun-bG;
				break;
			case 3:
				aydaGun=31;ilkFark=aydaGun-bG;
				break;
			case 4:
				aydaGun=30;ilkFark=aydaGun-bG;
				break;
			default:
				printf("Yanlis giris yaptiniz tekrar giriniz");
				break;
		}
		
	top=top2+ilkFark+sG;
	printf("%d : gunluk istikrar!",top);
	break; 
	
	case 4:
		
    bA=3;
	bG=23;
	printf("bugunun ay ve gununu yazýnýz\n");
	scanf("%d%d",&sA,&sG);

	
	for(;bA<sA-1;bA++){
		switch(bA+1){
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
		switch(bA){
			case 1:
				aydaGun=31;ilkFark=aydaGun-bG;
				break;
			case 2:
				aydaGun=28;ilkFark=aydaGun-bG;
				break;
			case 3:
				aydaGun=31;ilkFark=aydaGun-bG;
				break;
			case 4:
				aydaGun=30;ilkFark=aydaGun-bG;
				break;
			default:
				printf("Yanlis giris yaptiniz tekrar giriniz");
				break;
		}
	top=top2+ilkFark+sG;
	printf("%d  gunluk istikrar!",top);
	break;
	
		default:
				printf("Yanlis giris yaptiniz tekrar giriniz");
				break;
}
}
