#include<stdio.h>
double a,b,c;
int main(){
	printf("birinci sayýyý giriniz : ");
	scanf("%lf",&a);
	printf("ikinci sayýyý giriniz : ");
	scanf("%lf",&b);
	printf("ucuncu sayýyý giriniz : ");
	scanf("%lf",&c);
	double ort=((a+b+c)/3.0);
	printf("ortalama %f",ort);
	return 0;
}
