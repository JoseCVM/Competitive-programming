#include <stdio.h>

int main(){
	int n;
	int st,bt,at,ss,bs,as;
	st = bt = at = ss = bs = as = 0;
	scanf("%d",&n);
	while(n--){
		scanf("%*s%*c");
		int a,b,c,d,e,f;
		scanf("%d %d %d",&a,&b,&c);
		scanf("%d %d %d%*c",&d,&e,&f);
		st+=a;
		bt+=b;
		at+=c;
		ss+=d;
		bs+=e;
		as+=f;
	}
	printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n",(double)((ss*100.0)/st),(double)((bs*100.0)/bt),(double)((as*100.0)/at));
	return 0;
}
