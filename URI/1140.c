#include <stdio.h>
#include <string.h>
int main(){
	char s[1010];
	while(1){
		scanf("%[^\n]%*c",s);
		if(s[0] == '*'){
			break;
		}
		int taut = 1;
		if(s[0] <97) s[0] += 32;
		char ini = s[0];
		int t = strlen(s);
		int i;
		for(i = 1;i<t;i++){
			if(s[i] != ' ' && s[i] < 97) s[i] += 32;
			if(s[i-1] == ' ' && s[i] != ini) taut = 0;
		}
		if(taut == 1) printf("Y\n");
		else printf("N\n");
	}
	return 0;
}
