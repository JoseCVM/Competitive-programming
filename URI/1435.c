#include <stdio.h>
int min(int a, int b){
	return a < b? a : b;
}
int main(){
	int n;
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		int i, j;
		for(i = 1;i<=n;i++){
			for(j = 1;j<=n;j++){
				if(i + j <= n)
					printf("%3d",min(i,j));
				else
					printf("%3d",min(n-i+1,n-j+1));
				if(j < n) printf(" ");
			}
			printf("\n");
		}	
		printf("\n");
	}
	return 0;
}
