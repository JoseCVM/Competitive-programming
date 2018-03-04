#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, i, p = 0;
		char s[110][30];
		scanf("%d%*c",&n);
		for(i = 0;i<n;i++){
			scanf("%s",s[i]);
			if(strcmp(s[i],"LEFT")==0){
				p--;
			}else if(strcmp(s[i],"RIGHT")==0){
				p++;
			}else{
				int k;
				scanf("%*c%*s%*c%d",&k);
				k--;
				if(strcmp(s[k],"LEFT")==0){
					strcpy(s[i],"LEFT");
					p--;
				}else if(strcmp(s[k],"RIGHT")==0){
					p++;
					strcpy(s[i],"RIGHT");
				}				
			}
		}
		printf("%d\n",p);
	}
	return 0;
}
