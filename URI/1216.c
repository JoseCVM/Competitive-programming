#include <stdio.h>

int main(){
	int d, t = 0;
	int s = 0;
	int q = 0;
	while(scanf("%*s%*c%d%*c",&d) != EOF){
		if(q == 1){
			q = 0;
			s+=d;
			t++;
		}else{
			q = 1;
		}
	}
	printf("%.1lf\n",(double)s/t);
	return 0;
}
