#include <stdio.h>
typedef unsigned long long int ull;
int main(){
	int n;
	int j;
	scanf("%d",&n);
	while(n--){
		char c[25];
		int d;
		scanf("%d%s%*c",&d,c);
		int k = strlen(c);
		ull res = 1;
		for(j = 0;j<d;j+=k){
			res *= (d-j);
		}
		printf("%llu\n",res);
	}	
	return 0;
}
