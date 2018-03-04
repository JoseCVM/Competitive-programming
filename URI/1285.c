#include <stdio.h>

int main(){
	int v[5001], i;
	v[0] = 0;
	for(i = 1;i<5001;i++){	
		v[i] = v[i-1];	
		int dig[10] = {0};
		int d = i;
		while(d > 0){
			dig[d%10]++;
			if(dig[d%10] > 1){
				v[i]++;
				break;
			}
			d /= 10;
		}
	//	printf("%d : %d\n",i,v[i]);
	}
	int a, b;
	while(scanf("%d %d",&a,&b) != EOF){
			
		printf("%d\n",(b-a+1) - (v[b]-v[a-1]));
	
	}
	return 0;
}
