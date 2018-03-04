#include <stdio.h>

int main(){
	int i;
	double val;
	for(i = 0;i<100;i++){
		scanf("%lf",&val);
		if(val <= 10){
			printf("A[%d] = %.1lf\n",i,val);
		}
	}
	return 0;
}
