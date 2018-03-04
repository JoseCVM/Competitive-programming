#include <stdio.h>
#include <math.h>

int main(){
	int n;
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		int dig = 1 << (n-1)*2;
		dig = floor(log10(dig)) + 1;
		int i, j;
		long long int k , ini;
		ini = 1;
		for(i = 0;i<n;i++){
			k = ini;
			for(j = 0;j<n;j++){	
				if(j == 0)	
					printf("%*lld",dig,k);
				else
					printf(" %*lld",dig,k);
				k *= 2;
			}
			printf("\n");
			ini *= 2;
		}
		printf("\n");
	}
	return 0;
}
