#include <stdio.h>

int main(){
	int n, f, i;
	f = 1;
	int prev = 1;
	scanf("%d",&n);
	printf("0");
	for(i = 1;i<n;i++){
		int a;
		printf(" %d",prev);
		a = prev;
		prev = f;
		f = f + a;
	}
	printf("\n");
	return 0;
}
