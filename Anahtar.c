#include<Stdio.h>
int main(){
	printf("bir tu�a bas�n�z");
	int a;
	scanf("%d",&a);
	switch(a){
		case 1:
		    printf("m�s�eri hizmetleri");
		    break;
		case 2:
			printf("�ifre degi�imi");
			break;
		case 3:
			printf("kayip calinti bildirimi");
			break;
		default:
			printf("tekrar deneyiniz");
	}

}
