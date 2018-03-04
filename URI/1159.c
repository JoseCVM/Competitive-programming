#include <stdio.h>

int main(){
	while(1){
		int n;
		scanf("%d",&n);
		if(n == 0) break;
		if(n%2 != 0) n++;
		printf("%d\n",n*5  +20);
	}
	return 0;
}
