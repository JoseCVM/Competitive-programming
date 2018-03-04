#include <stdio.h>

int main(){
	int d, t = 0;
	int s = 0;
	while(scanf("%*s %d",&d) != EOF){
		s+=d;
		t++;
	}
	
	printf("%.1lf\n",(double)s/t);
	return 0;
}
