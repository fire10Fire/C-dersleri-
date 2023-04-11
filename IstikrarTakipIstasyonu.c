#include<Stdio.h>
	int ilkFark,top=0,bA,sA,bG,sG,aydaGun,top2=0;
   
int main(){
	// yeni eklemeler suan hangi dalda
	baslangic:
	printf("Istikrar takip istasyonuna hosgeldiniz\nKac numarali istikrari gormek istersiniz\n");
	printf("1- lgs sýnavýna kalan gün\n4-Ramazan istikrarý \n9-Yabancý dil istikrarý\n8-Teknik beceri istikrarý ");
	int anahtar;
	scanf("%d",&anahtar);
	
	printf("bugunun ay ve gununu yaziniz\n");
	scanf("%d%d",&sA,&sG);
    int d=sA;
	
	switch(anahtar){
	
	
		case 1:
		
	for(;bA-1>sA;sA++){
		switch(sA+1){
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
			case 5:
				aydaGun=31;
				break;
			case 6:
				aydaGun=30;
				break;
			case 7:
				aydaGun=31;
				break;
			case 8:
				aydaGun=31;
				break;
			case 9:
				aydaGun=31;
				break;
			case 10:
				aydaGun=31;
				break;
			case 11:
				aydaGun=30;
				break;
			case 12:
				aydaGun=31;
				break;
			default:
				printf("Yanlis giris yaptiniz tekrar giriniz\n");
				break;
		}
		top2+=aydaGun;
	} 
	sA=d;
	
	
		switch(sA){
			case 1:
				aydaGun=31;ilkFark=aydaGun-sG;
				break;
			case 2:
				aydaGun=28;ilkFark=aydaGun-sG;
				break;
			case 3:
				aydaGun=31;ilkFark=aydaGun-sG;
				break;
			case 4:
				aydaGun=30;ilkFark=aydaGun-sG;
				printf("%d",ilkFark);
				break;
			case 5:
				aydaGun=31;ilkFark=aydaGun-sG;
				break;
			case 6:
				aydaGun=30;ilkFark=aydaGun-sG;
				break;
			case 7:
				aydaGun=31;ilkFark=aydaGun-bG;
				break;
			case 8:
				aydaGun=31;ilkFark=aydaGun-bG;
				break;
			case 9:
				aydaGun=31;ilkFark=aydaGun-bG;
				break;
			case 10:
				aydaGun=31;ilkFark=aydaGun-bG;
				break;
			case 11:
				aydaGun=30;ilkFark=aydaGun-bG;
				break;
			case 12:
				aydaGun=31;ilkFark=aydaGun-bG;
				break;
			default:
				printf("Yanlis giris yaptiniz tekrar giriniz\n");
				break;
		}
	
	
	printf("%d ve %d",ilkFark,top2);	
	top=top2+ilkFark+bG;
	printf("%d  gunluk istikrar!\n",top);
goto baslangic;
	
	
	break;
	
	
	case 4:
		
    bA=3;
	bG=23;
    gecenGun(sA,sG);
goto baslangic;
	break;
	
	case 5:	
	
    bA=4;
	bG=10;
    gecenGun(sA,sG);
goto baslangic;
	break;
	
	case 8:
		
	bA=2;
	bG=14;
		gecenGun(sA,sG);
		goto baslangic;
		break;
		
	case 9 :
		
	bA=1;
	bG=10;
	gecenGun(sA,sG);
goto baslangic;
	break; 
	
	
		default:
				printf("Yanlis giris yaptiniz tekrar giriniz\n");
			goto baslangic;
				break;
}

}
void gecenGun(int sA, int sG){

if(sA==bA){
	top=sG-bG;
	printf("%d  gunluk istikrar!\n",top);
}
else{


	
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
				printf("Yanlis giris yaptiniz tekrar giriniz\n");
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
				printf("Yanlis giris yaptiniz tekrar giriniz\n");
				break;
		}
		
	top=top2+ilkFark+sG;
	printf("%d  gunluk istikrar!\n",top);
	}
}
