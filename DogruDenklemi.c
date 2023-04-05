#include<Stdio.h>
 int main(){
 	double a,b;
 	printf("ax+b=y seklinde tanimlanan fonksiyonun koklerini bulmak icin oncelikle a ve be degerlerini giriniz.\n");
 	scanf("%lf%lf",&a,&b);
 	double x1= -b/a;
 	printf("Denklemi verilen dogru x eksenini %.1f noktasinda keser",x1);
 	
 }
