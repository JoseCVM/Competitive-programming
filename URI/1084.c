#include <stdio.h>
#include <time.h>

int main(){
	clock_t begin = clock();
	int n, d;	
	char c[100010];
	char res[100010];
	while(1){
		scanf("%d %d",&n,&d);
		if(n == d && d == 0) break;	
		int k = 0;
		
		int i;
		scanf("%s%*c",c);
		d = n - d;
		int tam = strlen(c);
		int ini = 0;
		while(d > 0){
			int p = tam - d;
		 //	printf("precisamos checar os %d primeiros digitos para sobrarem %d no fim de %s\n",p,d,c);
			char max = '0' - 1;
			int posm = -1;
			for(i = ini;i<=p;i++){
				if(c[i] > max){
					max = c[i];
					posm = i;
				}
			}
			ini = posm+1;
		//	printf("escolheu %c, sobra %s\n",max,c+ini);
			d--;
			res[k] = max;
			k++;
		}
		res[k] = '\0';
		printf("%s\n",res);
	}
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Tempo: %.2lf\n",time_spent);
	return 0;
}
