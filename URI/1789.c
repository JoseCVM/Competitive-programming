#include <stdio.h>

int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		int i;
		int bst = 1;
		for(i = 0;i<n;i++){
			int val;
			scanf("%d",&val);
			if(val >= 10 && val < 20 && bst < 2) bst = 2;
			if(val >= 20 && bst < 3) bst = 3;
		}
		printf("%d\n",bst);
		
	}
	return 0;
}
