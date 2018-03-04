#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d%*c",&t);
	while(t--){
		char c[10010];
		scanf("%s%*c",c);
		printf("%.2lf\n",(double)strlen(c)/100.0);
	}
	return 0;
}
