#include <stdio.h>

int main(){
	int v;
	int al, ga, di;
	al = ga = di = 0;
	do{
		scanf("%d",&v);
		if(v == 1) al++;
		if(v == 2) ga++;
		if(v == 3) di++;
	}while(v != 4);
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",al,ga,di);
	return 0;
}
