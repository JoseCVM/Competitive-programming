#include <stdio.h>

int main(){
	int n;
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		while(n--){
			int d = 0;
			char a[7] = "ABCDE*";
			int r[5];
			int i;
			int res = 5;
			for(i = 0;i<5;i++){
				scanf("%d",&r[i]);
				if(r[i]<=127 && d == 0){
					d = 1;
					res = i;
				}else if(r[i] <= 127 && d != 0){
					res = 5;
				}
			}
			printf("%c\n",a[res]);
		}
	}
	return 0;
}
