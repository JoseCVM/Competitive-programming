#include <stdio.h>

int main(){
	int i, n,val, pos;
	int menor;
	scanf("%d",&n);
	scanf("%d",&menor);
	pos = 1;
	for(i = 1;i<n;i++){
		scanf("%d",&val);
		if(val < menor){
			menor = val;
			pos = i;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n",menor,pos);
	return 0;
}
