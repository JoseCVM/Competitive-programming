#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d%*c",&t);
	while(t--){
		char s[10010], s2[10010];
		scanf("%s %s%*c",s,s2);
		int i = 0;
		int d = 0;
		while(s[i] != '\0'){
			if(s[i] <= s2[i])
				d += abs(s[i]-s2[i]);
			else
				d += 26 -abs(s[i]-s2[i]);
		//	printf("%c - %c = %d\n",s[i],s2[i],abs(s[i]-s2[i]));
			i++;
		}
		printf("%d\n",d);
	}
	return 0;
}
