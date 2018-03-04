#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s1[1010], s2[1010];
		scanf("%s %s",s1,s2);
		int t1, t2;
		t1 = strlen(s1);
		t2 = strlen(s2);
		if(t1 < t2) printf("nao encaixa\n");
		else{
			if(strcmp(s1 + (t1 - t2),s2) == 0) printf("encaixa\n");
			else printf("nao encaixa\n");
		}
	}
	return 0;
}
