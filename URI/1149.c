#include <stdio.h>

int main(){
	int a, n;
	scanf("%d",&a);
	while(1){
		scanf("%d",&n);
		if(n > 0) break;
	}
	printf("%d\n",((a+(a+n-1))*n)/2);
	return 0;
}
