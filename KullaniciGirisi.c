#include <stdio.h>
int main(){
	double a;
	double b;
	
	printf("sayýlarý giriniz : ");
	scanf("%lf%lf",&a,&b);
	double cevap = a*b;
	printf("girdiðiniz sayýlar %f ve %f ise çarpýmý : %f  olur",a,b,cevap);
}
