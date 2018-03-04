#include <stdio.h>
#include <string.h>

int main(){
	char t[550];
	scanf("%[^\n]s",t);
	if(strlen(t) <= 140) printf("TWEET\n");
	else printf("MUTE\n");
	return 0;
}
