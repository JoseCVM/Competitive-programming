#include <stdio.h>

int main(){
	char s[100];
	while(scanf("%[^\n]%*c",s) != EOF){
		int t = strlen(s);
		int prev = 0;
		int i;
		for(i = 0;i<t;i++){
			if(s[i] == ' ') continue;
			if(s[i] >= 97 && prev == 0){
				s[i] -= 32;
				prev = 1;
			}else if(s[i] <= 90 && prev == 1){
				s[i] += 32;
				prev = 0;
			}else if(s[i] <= 90 && prev == 0){
				prev = 1;
			}else if(s[i] >= 97 && prev == 1){
				prev = 0;
			} 
		}
		printf("%s\n",s);	
	}
	return 0;
}
