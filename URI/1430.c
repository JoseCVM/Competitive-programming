#include <stdio.h>

int main(){
	char c[210];
	while(1){
		int i, te = 0;
		scanf("%s%*c",c);
		if(c[0] == '*') break;
		int t = strlen(c), cnt;
		for(i = 0;i<t;i++){
			if(c[i] == '/'){
				if(cnt == 64){
					te++;
				}
				cnt = 0;
			}
			if(c[i] == 'W') cnt+=64;
			if(c[i] == 'H') cnt+=32;
			if(c[i] == 'Q') cnt+=16;
			if(c[i] == 'E') cnt+=8;
			if(c[i] == 'S') cnt+=4;
			if(c[i] == 'T') cnt+=2;
			if(c[i] == 'X') cnt+=1;
		}
		printf("%d\n",te);
	}
	return 0;
}
