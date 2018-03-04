#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool primo(long long int k){
	if(k <= 1) return false;
	if(k == 2 || k == 3) return true;
	if(k%2 == 0 || k % 3 == 0) return false;
	int i = 5, j = 2;
	int fim = sqrt(k) + 1;
	while(i <= fim){
		if(k%i == 0) return false;
		i+=j;
		j = 6 - j;
	}
	return true;
}

int main(){
	long int t;
	scanf("%ld",&t);
	while(t--){
		long int n;
		scanf("%ld",&n);
		if(primo(n)) printf("Prime\n",n);
		else printf("Not Prime\n",n);
	}
	return 0;
}
