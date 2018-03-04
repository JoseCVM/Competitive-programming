#include <stdio.h>

int main(){
	int n;
	char c = 'N';
	while(1){
		c = 'N';
		scanf("%d%*c",&n);
		if(n == 0) break;
		int i;
		char op;
		for(i = 0;i<n;i++){
			scanf("%c",&op);
			if(op == 'D'){
				if(c == 'N') c = 'L';
				else if(c == 'L') c = 'S';
				else if(c == 'S') c = 'O';
				else if(c == 'O') c = 'N';
			}else if(op == 'E'){
				if(c == 'N') c = 'O';
				else if(c == 'O') c = 'S';
				else if(c == 'S') c = 'L';
				else if(c == 'L') c = 'N';
			}
		}
		printf("%c\n",c);
	}
	return 0;
}
