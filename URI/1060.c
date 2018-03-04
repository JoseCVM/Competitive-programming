#include <stdio.h>

int main(){
	int n = 0;
	int i;
	double p;
	for(i = 0;i<6;i++){
		scanf("%lf",&p);
		if(p > 0) n++;
	}
	printf("%d valores positivos\n",n);
	return 0;
}
