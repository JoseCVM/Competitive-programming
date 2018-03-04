#include <stdio.h>

int main(){
	float a,b,c,d;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	a *= 2;
	b *= 3;
	c *= 4;
	float m = (a+b+c+d)/10;
	printf("Media: %.1f\n",m);
	if(m < 5) printf("Aluno reprovado.\n");
	else if(m >= 5 && m <= 6.9){
		float e;
		printf("Aluno em exame.\n");
		scanf("%f",&e);
		m = (m+e)/2;
		printf("Nota do exame: %.1f\n",e);
		if(m < 5) printf("Aluno reprovado.\n");
		else{
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",m);
		}
		
	}else{
		printf("Aluno aprovado.\n");
	}
	return 0;
}
