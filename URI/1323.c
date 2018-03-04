#include <stdio.h>

int main(){
	int v[105] = {0};
	int i;
	v[0] = 0;
	v[1] = 1;
	for(i = 2;i<102;i++){
		v[i] = i*i + v[i-1];
	}
	int n;
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		printf("%d\n",v[n]);
	}
	return 0;
}
