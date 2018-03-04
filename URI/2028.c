#include <stdio.h>

int main(){
	int n;
	int t =1;
	while(scanf("%d",&n) != EOF){
		int k = 1 + ((1+n)*n)/2;
		int i;
		printf("Caso %d: %d numero",t,k);
		if(k > 1) printf("s\n");
		else printf("\n");
		t++;
		printf("0");
		for(i = 1;i<=n;i++){
			int f = i, m =i;
			while(f > 0){
				printf(" %d",m);
				f--;
			}
		}
		printf("\n\n");
	}
	return 0;
}
