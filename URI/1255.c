#include <stdio.h>

int main(){
	int t;
	scanf("%d%*c",&t);
	while(t--){
		int v[27] = {0};
		int max, i;
		char s[300];
		scanf("%[^\n]%*c",s);
		int t = strlen(s);
		max = -1;
		for(i = 0;i<t;i++){
			char c = s[i];
			if(c >= 'A' && c<='Z') c += 32;
			if(c >= 'a' && c<='z'){
				v[c-'a']++;
				if(v[c-'a']>max){
					max = v[c-'a'];
				}
			}
		}
		for(i = 0;i<27;i++){
			if(v[i] == max) printf("%c",i+'a');
		}
		printf("\n");
	}
}
