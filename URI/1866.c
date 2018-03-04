#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int v;
		scanf("%d",&v);
		if(v%2 == 0) printf("0\n");
		else printf("1\n");
	}
	return 0;
}
