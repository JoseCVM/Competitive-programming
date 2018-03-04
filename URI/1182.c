#include <stdio.h>


int main(){
	int l;
	char op;
	int i, j;
	double media, val;
	scanf("%d %c",&l,&op);
	media = 0;
	for(i = 0;i<12;i++){
		for(j = 0;j<12;j++){
			scanf("%lf",&val);
			if(j == l) media += val;
		}
	}
	if(op == 'M')
		printf("%.1lf\n",media/12);
	else if(op == 'S')
			printf("%.1lf\n",media);
	return 0;
}
