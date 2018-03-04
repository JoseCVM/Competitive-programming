#include <stdio.h>

int main(){
	int v[12] = {10000,5000,2000,1000,500,200,100,50,25,10,5,1};
	double n;
	int f;
	scanf("%lf",&n);
	f = n*100;
	int i = 0;
	for(i = 0;i<12;i++){
		int k = f/v[i];
		f = f%v[i];
		if(i == 0) printf("NOTAS:\n");
		if(i<6){
			printf("%d nota(s) de R$ %.2lf\n",k,(double)v[i]/100);
		}else{
			if(i == 6) printf("MOEDAS:\n");
			printf("%d moeda(s) de R$ %.2lf\n",k,(double)v[i]/100);
		}
		//printf("Resta %lf\n",(double) f/100);
	}
	return 0;
}
