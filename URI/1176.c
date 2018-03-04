#include <stdio.h>

int main(){
	long long int fib[63] = {0};
	fib[1] = fib[2] = 1;
	int n, i;
	
	for(i = 3;i<61;i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	scanf("%d",&n);
	while(n--){
		int k;
		scanf("%d",&k);
		printf("Fib(%d) = %lld\n",k,fib[k]);
	}
	return 0;
}
