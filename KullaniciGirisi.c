#include <stdio.h>
int main(){
	double a;
	double b;
	
	printf("say�lar� giriniz : ");
	scanf("%lf%lf",&a,&b);
	double cevap = a*b;
	printf("girdi�iniz say�lar %f ve %f ise �arp�m� : %f  olur",a,b,cevap);
}
