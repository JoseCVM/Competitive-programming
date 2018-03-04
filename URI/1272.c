#include <stdio.h>

int main(){
	int t;
	scanf("%d%*c",&t);
	while(t--){
		char str[60];
		int ini = 0;
		int nxt = 1;
		char c;
		while(1){
			if(scanf("%c",&c) == EOF) break;
			if(c == '\n') break;
			if(c == ' '){
				nxt = 1;
			}else if(c != ' '){
				if(nxt == 1){ 
					str[ini] = c;
					ini++;
					nxt = 0;
				}
			}
		}
		str[ini] = '\0';
		printf("%s\n",str);
	}
}
