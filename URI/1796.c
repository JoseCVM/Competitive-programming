#include <stdio.h>

int main(){
	int n;
	int i;
	int s = 0;
	scanf("%d",&n);
	for(i = 0;i<n;i++){
		int v;
		scanf("%d",&v);
		s += v;
	}
	if(s >= n-s) printf("N\n");
	else printf("Y\n");
	return 0;
}
