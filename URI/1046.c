#include <stdio.h>
#include <math.h>
int main(){
	int s, f;
	scanf("%d %d",&s,&f);
	int t = ((24-s)+f)%24;
	if(t == 0) t = 24;
	printf("O JOGO DUROU %d HORA(S)\n",t);
	return 0;
}
