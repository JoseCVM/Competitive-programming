#include <stdio.h>

int main(){
	int i, j, n;
	while(scanf("%d",&n) != EOF){
		for(i = 0;i<n;i++){
			for(j = 0;j<n;j++){
				if(i == (n-1)/2 && j == (n-1)/2){
					printf("4");
				}else
				if(i < n - n/3 && i >= n/3 && j < n - n/3 && j >= n/3 ){
					printf("1");
				}else if(i == j){
					printf("2");
				}else if(i+j == n-1){
					printf("3");
				}else{
					printf("0");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
