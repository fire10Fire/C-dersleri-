#include<Stdio.h>
int main(){
	int i;
	int top=0;
	dongu:
	if(i<6){
		top+=i;
		i++;
		goto dongu;
	}
		printf("%d\n",top);

}
