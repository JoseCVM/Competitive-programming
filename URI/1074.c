#include <stdio.h>

int main(){
	int n, v, i;
	scanf("%d",&n);
	for(i = 0;i<n;i++){
		scanf("%d",&v);
		if(v > 0){
			if(v%2 == 0){
				printf("EVEN POSITIVE\n");
			}else{
				printf("ODD POSITIVE\n");
			}
		}else
		if(v < 0){
			if(v%2 == 0){
				printf("EVEN NEGATIVE\n");
			}else{
				printf("ODD NEGATIVE\n");
			}
		}else{
			printf("NULL\n");
		}
	}
	return 0;
}
