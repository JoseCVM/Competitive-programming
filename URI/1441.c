#include <stdio.h>
typedef unsigned long long int llu;
int main(){
	llu n;
	while(1){
		scanf("%llu",&n);
		if(n == 0) break;	
		llu max = n;
		while(n != 1){
			if(n > max){
				max = n;
			}
			if(n%2 == 0){
				n =(llu)n/2;
			}else{
				n =(llu)3*n + 1;
			}
		}
		printf("%llu\n",max);
	}
	return 0;
}
