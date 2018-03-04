#include <stdio.h>

int main(){
	int t, i;
	scanf("%d",&t);
	while(t--){
		char c[60];
		scanf("%s",c);
		int s;
		scanf("%d",&s);
		int t = strlen(c);
		for(i = 0;i<t;i++){
			c[i] -= s;
			if(c[i] < 'A'){
				c[i] = 'Z' - ('A' - c[i]) + 1;
			}
		}
		printf("%s\n",c);
	}
	return 0;
}
