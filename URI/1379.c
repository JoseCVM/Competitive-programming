#include <stdio.h>

long long int min(long long int a,long long int b){
	return a < b ? a : b;
}

int main(){
	long long int a, b;
	while(1){
		scanf("%lld %lld",&a,&b);
		if(a == b && b == 0) break;
		long long c = min(2*a - b,min(2*b-a,2*a+2*b));
		printf("%lld\n",c);
	}
	return 0;
}
