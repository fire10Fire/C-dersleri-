#include<stdio.h>
double a,b,c;
int main(){
	printf("birinci say�y� giriniz : ");
	scanf("%lf",&a);
	printf("ikinci say�y� giriniz : ");
	scanf("%lf",&b);
	printf("ucuncu say�y� giriniz : ");
	scanf("%lf",&c);
	double ort=((a+b+c)/3.0);
	printf("ortalama %f",ort);
	return 0;
}
