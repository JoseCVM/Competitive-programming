#include <stdio.h>
#include <math.h>

int main(){
	long long int v, t;
	while(scanf("%lld %lld",&v,&t) != EOF){
		long long int k = v - t;
		if(k < 0) k*=-1;
		printf("%lld\n",k);
	}
	return 0;
}
