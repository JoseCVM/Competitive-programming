#include <stdio.h>

int main(){
	double n;
	double r1 = 1 + sqrt(5.0), r2 = 1 - sqrt(5.0) ;
	r1 /= 2.0;
	r2 /= 2.0;
	scanf("%lf",&n);
	n =	(pow(r1,n) - pow(r2,n))/sqrt(5.0);
	printf("%.1lf\n",n);
	return 0;
}
