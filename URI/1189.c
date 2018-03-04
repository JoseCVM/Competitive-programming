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
			if(j == 0 && i > 0 && i < 11) media += val;
			else if(j == 1 && i > 1 && i < 10) media += val;
			else if(j == 2 && i > 2 && i < 9) media += val;
			else if(j == 3 && i > 3 && i < 8) media += val;
			else if(j == 4 && i > 4 && i < 7) media += val;
					
		}
	}
	if(op == 'M')
		printf("%.1lf\n",media/30);
	else if(op == 'S')
			printf("%.1lf\n",media);
	return 0;
}
