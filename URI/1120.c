#include <stdio.h>

int main(){
	char a;
	while(1){
		char k;
		int sig = 0;
		scanf("%c %c",&a,&k);
		if(a == '0' && k == '0') break;
		if(k != '0' && k != a){
			sig = 1;
			printf("%c",k);
		}
		while(1){
			scanf("%c",&k);
			if(k == '\n') break;
			if(k == '0' && sig == 1) printf("%c",k);
			if(k != '0' && k != a){
				sig = 1;
				printf("%c",k);
			}
		}
		if(sig == 0) printf("0");
		printf("\n");
	}
	return 0;
}
