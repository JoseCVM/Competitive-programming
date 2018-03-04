#include <stdio.h>

int main(){
	int n, i;
	int vet[2020] = {0};
	scanf("%d",&n);
	for(i = 0;i<n;i++){
		int v;
		scanf("%d",&v);
		vet[v]++;
	}
	for(i = 0;i<2020;i++){
		if(vet[i] != 0) printf("%d aparece %d vez(es)\n",i,vet[i]);
	}
	return 0;
}
