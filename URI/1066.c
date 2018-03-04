#include <stdio.h>

int main(){
	int a,i;
	int par, imp, pos, neg;
	par = imp = pos = neg = 0;
	for(i = 0;i<5;i++){
		scanf("%d",&a);
		if(a < 0){
			neg++;
		}else if(a > 0){
			pos++;
		}
		if(a%2==0){
			par++;
		}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",par,5-par,pos,neg);
	return 0;
}
