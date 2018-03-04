#include <stdio.h>
#include <string.h>

int main(){
	char s[60];
	while(scanf("%[^\n]%*c",s) != EOF){
		int t = strlen(s), i;
		for(i = 0;i<t;i++){
			if((s[i]>='a' && s[i]<='z')){
				s[i] -= 'a';
				s[i] = (s[i]+13)%26;
				s[i] += 'a';
			}else if((s[i]>='A' && s[i]<='Z')){
				s[i] -= 'A';
				s[i] = (s[i]+13)%26;
				s[i] += 'A';
			}
		}
		printf("%s\n",s);
	}	
	return 0;
}
