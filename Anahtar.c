#include<Stdio.h>
int main(){
	printf("bir tuþa basýnýz");
	int a;
	scanf("%d",&a);
	switch(a){
		case 1:
		    printf("müsþeri hizmetleri");
		    break;
		case 2:
			printf("þifre degiþimi");
			break;
		case 3:
			printf("kayip calinti bildirimi");
			break;
		default:
			printf("tekrar deneyiniz");
	}

}
