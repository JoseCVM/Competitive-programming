#include <stdio.h>

int main(){
	int fat[6] = {1,1,2,6,24,120};
	int d;
	while(1){
		scanf("%d",&d);
		if(d==0) break;
		int i = 1;
		int res = 0;
		while(d != 0){
		//	printf("%d*%d\n",fat[i],d%10);
			res += fat[i]*(d%10);
			i++;
			d = d/10;
		}
		printf("%d\n",res);
	}
	return 0;
}
