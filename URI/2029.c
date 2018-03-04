#include <stdio.h>
int main(){
	double v;
	while(scanf("%lf",&v) != EOF){
		double d, r;
		scanf("%lf",&d);
		r = d/2;
		double a = 3.14*r*r;
		double h = v/a;
		printf("ALTURA = %.2lf\nAREA = %.2lf\n",h,a);
	}
	return 0;
}
