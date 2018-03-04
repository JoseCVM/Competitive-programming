#include <stdio.h>

int main(){
	int inih, inim, fimh, fimm;
	scanf("%d %d %d %d",&inih,&inim,&fimh,&fimm);
	int dmim = 60-inim + fimm;
	int dh = 0;
	if(dmim >= 60){
		dmim -= 60;
		dh++;
	} 
	inih+=1;
	dh += ((24 - inih) + fimh)%24;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dmim);
	return 0;
}
