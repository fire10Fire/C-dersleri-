#include <Stdio.h>
#define pi 3.14
int main(){
	double a,b,alan,cevre;
	printf("Diktorgenin kisa ve uzun kenarlarini yaziniz\n");
	scanf("%lf%lf",&a,&b);
	alan= a*b;
	cevre=2*(a+b);
	printf("DIKDORTGENIN ALANI :%.1f \nDIKTORGENIN CEVRESI : %.1f \n",alan,cevre);
	daire();
}
int daire(){
	printf("Dairenin yarýçapýný giriniz: ");
	double r=0;
	scanf("%lf",&r);
	double alan= pi*r*r;
	double cevre= 2*pi*r;
	printf("Dairenin alaný : %.2f \nDairenin cevresi : %.2f ",alan,cevre);
}
