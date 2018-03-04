#include <stdio.h>

int main(){
	long long int a, b, r;
	while(1){
		int i, k;
		char c[50];
		char res[50];
		scanf("%lld %lld",&a,&b);
		if(a == 0 && b == 0) return 0;
		r = a + b;
		sprintf(c,"%lld",r);
		i = 0;
		k = 0;
		while(c[i] != '\0'){
			if(c[i] != '0'){
				res[k] = c[i];
				k++;		
			}
			i++;
		}
		res[k] = '\0';
		printf("%s\n",res);
	}
	return 0;
}
