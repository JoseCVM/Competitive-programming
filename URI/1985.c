#include <stdio.h>

int main(){
	int n, t = 0;
	double s = 0;
	double p[5] = {1.5,2.5,3.5,4.5,5.5};
	scanf("%d",&n);
	while(n--){
		int v, cod;
		scanf("%d %d",&cod,&v);
		s += p[cod-1001]*v;
	}
	printf("%.2lf\n",s);
	return 0;
}
