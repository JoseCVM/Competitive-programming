#include <stdio.h>
int min(int a, int b){
	return a < b ? a : b;
}
int main(){
	int t;
	scanf("%d%*c",&t);
	while(t--){
		char c = '?';
		int v[26] = {0};
		while((c = getchar()) != '\n'){
			if(c >= 'a' && c <= 'z') v[c-'a']++;
		}
		int i, cnt = 0;
		for(i = 0;i<26;i++) cnt += min(v[i],1);
		if(cnt == 26) printf("frase completa\n");
		else if(cnt >= 13) printf("frase quase completa\n");
		else printf("frase mal elaborada\n");
	}
	return 0;
}
