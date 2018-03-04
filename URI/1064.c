#include <stdio.h>

int main(){
	double a;
	int i, c = 0;
	double s = 0;
	for(i = 0;i<6;i++){
		scanf("%lf",&a);
		if(a > 0){
			c++;
			s += a;
		}
	}
	printf("%d valores positivos\n%.1lf\n",c,s/c);
	return 0;
}
