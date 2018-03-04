#include <stdio.h>

int main(){
	int i, n, k,o = 0;
	scanf("%d",&n);
	for(i = 0;i<5;i++){
		scanf("%d",&k);
		if(k == n) o++;
	}
	printf("%d\n",o);
	return 0;
}
