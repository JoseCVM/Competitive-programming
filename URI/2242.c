#include <stdio.h>
int isvog(char c){
	return (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o');
}
int main(){
	char s[60], c;
	scanf("%s",s);
	int t = strlen(s);
	int i = 0;
	t--;
	int v = 1;
	while(i <= t){
		while(!isvog(s[i])) i++;
		while(!isvog(s[t])) t--;
		if(s[i] != s[t]){
			v = 0;
			break;
		}
		i++;
		t--;
	}
	v == 0 ? printf("N\n") : printf("S\n");
	return 0;
}
