#include <stdio.h>
int max(int a, int b){
	return a > b ? a :b;
}
int main(){
	int dias;
	while(scanf("%d",&dias) != EOF){
		int i, val;
		int custo;
		scanf("%d",&custo);
		scanf("%d",&val);
		int max_ate;
		int max_aqui = max_ate = val - custo;
		for(i = 1;i<dias;i++){
			scanf("%d",&val);
			val -= custo;
			max_aqui = max(val,max_aqui + val);
			max_ate = max(max_ate,max_aqui);
		}
		printf("%d\n",max_ate > 0 ? max_ate : 0);
	}
	return 0;
}
