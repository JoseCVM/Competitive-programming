#include <stdio.h>

int main(){
	double s, ns;
	scanf("%lf",&s);
	if(s <= 400){
		ns = s * 1.15;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",ns,ns-s);
	}else if(s<=800){
		ns = s * 1.12;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",ns,ns-s);		
	}else if(s<=1200){
		ns = s * 1.10;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",ns,ns-s);
	}else if(s<=2000){
		ns = s * 1.07;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",ns,ns-s);
	}else{
		ns = s * 1.04;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",ns,ns-s);
	}
	return 0;
}
