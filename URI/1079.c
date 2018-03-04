#include <stdio.h>

int main(){
	int n;
	double a,b,c;
	double s = 0;
	scanf("%d",&n);
	while(n--){
		s = 0;
		scanf("%lf %lf %lf",&a,&b,&c);
		s = (2*a + 3*b + 5*c)/10;
		printf("%.1lf\n",s);
	}
	return 0;
}
