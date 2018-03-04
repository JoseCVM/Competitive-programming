#include <stdio.h>

int main(){
	int t1, t2, op;
	int total, grm, intr, empt;
	grm = intr = empt = total = 0;
	scanf("%d %d",&t1,&t2);
	printf("Novo grenal (1-sim 2-nao)\n");
	if(t1 < t2) grm++;
	if(t1 > t2) intr++;
	if(t1 == t2) empt++;
	total++;
	scanf("%d",&op);	
	while(op!=2){
		scanf("%d %d",&t1,&t2);
		printf("Novo grenal (1-sim 2-nao)\n");
		if(t1 < t2) grm++;
		if(t1 > t2) intr++;
		if(t1 == t2) empt++;
		total++;
		scanf("%d",&op);
	}
	printf("%d grenais\n",total);
	printf("Inter:%d\n",intr);
	printf("Gremio:%d\n",grm);
	printf("Empates:%d\n",empt);
	if(intr > grm) printf("Inter venceu mais\n");
	if(grm > intr) printf("Gremio venceu mais\n");
	if(intr == grm) printf("Nao houve vencedor\n");
	return 0; 
}
