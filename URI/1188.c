#include <stdio.h>


int main(){
	int l;
	char op;
	int i, j;
	double media, val;
	scanf("%c",&op);
	media = 0;
	for(i = 0;i<12;i++){
		for(j = 0;j<12;j++){
			scanf("%lf",&val);
			if(i == 11 && j > 0 && j < 11) media += val;
			else if(i == 10 && j > 1 && j < 10) media += val;
			else if(i == 9 && j > 2 && j < 9) media += val;
			else if(i == 8 && j > 3 && j < 8) media += val;
			else if(i == 7 && j > 4 && j < 7) media += val;
					
		}
	}
	if(op == 'M')
		printf("%.1lf\n",media/30);
	else if(op == 'S')
			printf("%.1lf\n",media);
	return 0;
}
