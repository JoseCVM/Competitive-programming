#include <stdio.h>

int main(){
	unsigned long long int a, b;
	while(1){
		scanf("%llu %llu",&a,&b);
		if(a == 0 && b == 0) break;
		printf("%llu\n",a*b);
	}
	return 0;
}
