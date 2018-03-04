#include <stdio.h>

int main(){
	int t;
	double min = -1;
	int cod = 0;
	scanf("%d",&t);
	while(t--){
		int c;
		double v;
		scanf("%d %lf",&c,&v);
		if(v > min){
			min = v;
			cod = c;
		}
	}
	if(min < 8) printf("Minimum note not reached\n");
	else printf("%d\n",cod);
	return 0;
}
