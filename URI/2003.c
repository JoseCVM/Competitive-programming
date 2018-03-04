#include <stdio.h>

int main(){
	int h,m;
	while(scanf("%d:%d",&h,&m) != EOF){
		int t = h*60+m + 60;
		int at = t - 8*60;
		if(at < 0) at = 0;
		printf("Atraso maximo: %d\n",at);
	}		
	return 0; 
}
