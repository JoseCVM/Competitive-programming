#include <stdio.h>

int main(){
	int n;
	while(scanf("%d%*c",&n) != EOF){
		int i, k, s =0;
		char tel[100010][210];
		char c;
		for(i = 0;i<n;i++){
			k = 0;
			int l = 0;
			while(scanf("%c",&c) != EOF){
				if(c == '\n') break;
				if(i == 0){
					
					tel[k] = c;
				//	printf("%c %c\n",tel[k],c);
				}else{
				//	printf("%c %c\n",tel[k],c);
					if(tel[k] == c && l == 0){
						s++;
					}else{
						tel[k] = c;
						l = 1;
					}
				}
				k++;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
