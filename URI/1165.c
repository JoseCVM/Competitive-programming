#include <stdio.h>
long int p[10000100];
void sieve(){
	long int i, j;
	for(i = 0;i<10000100;i++){
		p[i] = 1;
	}
	p[0] = p[1] = 0;
	for(i = 2;i*i<=10000100;i++){
		if(p[i] == 1){			
			for(j = i+i;j<=10000100;j+=i){
				p[j] = 0;
			}
		}
	}
}

int main(){
	sieve();
	long int t;
	scanf("%ld",&t);
	while(t--){
		long int n;
		scanf("%ld",&n);
		if(p[n] == 1) printf("%ld eh primo\n",n);
		else printf("%ld nao eh primo\n",n);
	}
	return 0;
}
