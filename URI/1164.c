#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long int n;
		scanf("%ld",&n);
		if(n ==	6 || n == 28 || n == 496 || n == 8128 || n ==33550336 || n == 8589869056) printf("%d eh perfeito\n",n);
		else printf("%d nao eh perfeito\n",n);
	}
	return 0;
}
