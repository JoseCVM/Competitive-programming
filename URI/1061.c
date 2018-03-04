#include <stdio.h>

int main(){
	int segundos_dia = 24*60*60;
	int segundos_hora = 60*60;
	int segundos_minuto = 60;
	int diai, horai, mini, segi;
	int diaf, horaf, minf, segf;
	int ini, fim;
	scanf("%*s %d",&diai);
	scanf("%d %*c %d %*c %d",&horai,&mini,&segi);
	scanf("%*s %d",&diaf);
	scanf("%d %*c %d %*c %d",&horaf,&minf,&segf);
	ini = diai*segundos_dia + horai*segundos_hora + mini*segundos_minuto + segi;
	fim = diaf*segundos_dia + horaf*segundos_hora + minf*segundos_minuto + segf;
	int t = fim - ini;
	printf("%d dia(s)\n",t/segundos_dia);
	t = t%segundos_dia;
	printf("%d hora(s)\n",t/segundos_hora);
	t = t%segundos_hora;
	printf("%d minuto(s)\n",t/segundos_minuto);
	t = t%segundos_minuto;
	printf("%d segundo(s)\n",t);
	return 0;
}
