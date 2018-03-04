#include <stdio.h>

int main(){
	int n;
	int k = 1, i;
	scanf("%d",&n);
	for(i = 0;i<n;i++){
		printf("%d %d %d PUM\n",k,k+1,k+2);
		k+=4;
	}
	return 0;
}
