#include <stdio.h>

int main(){
	int t, m = 0;
	scanf("%d",&t);
	while(t--){
		m++;
		printf("Instancia %d\n",m);
		int linha[9][9] = {0};
		int coluna[9][9] = {0};
		int caixa[9][9] = {0};
		int i, j;
		int flag = 0;
		for(i = 0;i<9;i++){
			for(j = 0;j<9;j++){
				int val;
				scanf("%d",&val);
				if(flag == 0){
					linha[i][val]++;
					if(linha[i][val] > 1) flag = 1;
					
					coluna[j][val]++;
					if(coluna[j][val] > 1) flag = 1;
					
					if(i > 0 && i < 3){
						if(j < 3){
							caixa[0][val]++;
							if(caixa[0][val]>1) flag = 1;
						}else if(j<6){
							caixa[1][val]++;
							if(caixa[1][val]>1) flag = 1;
						}else{
							caixa[2][val]++;
							if(caixa[2][val]>1) flag = 1;
						}
					}else if(i > 2 && i < 6){
						if(j < 3){
							caixa[3][val]++;
							if(caixa[3][val]>1) flag = 1;
						}else if(j<6){
							caixa[4][val]++;
							if(caixa[4][val]>1) flag = 1;
						}else{
							caixa[5][val]++;
							if(caixa[5][val]>1) flag = 1;
						}
					}else if(i > 5){
						if(j < 3){
							caixa[6][val]++;
							if(caixa[6][val]>1) flag = 1;
						}else if(j<6){
							caixa[7][val]++;
							if(caixa[7][val]>1) flag = 1;
						}else{
							caixa[8][val]++;
							if(caixa[8][val]>1) flag = 1;
						}
					}
				}
				
			}
		}
		if(flag == 0) printf("SIM\n\n");
		else printf("NAO\n\n");
	}
	return 0;
}
