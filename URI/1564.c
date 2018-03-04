#include <stdio.h>

int main(){
	int t;
	while(scanf("%d",&t) != EOF){
		if(t == 0) printf("vai ter copa!\n");
		else printf("vai ter duas!\n");
	}
	return 0;
}
