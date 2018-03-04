#include <stdio.h>
#include <string.h>
int main(){
	char s[510];
	scanf("%[^\n]s",s);
	if(strlen(s) > 80) printf("NO\n");
	else printf("YES\n");
	return 0;
}
