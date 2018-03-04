#include <stdio.h>
#include <string.h>
int main(){
	int n;
	int ini = 0;
	while(1){
		scanf("%d%*c",&n);
		if(n == 0) break;
		if(ini != 0)
			printf("\n");
		if(ini == 0) ini = 1;
		int i, maior;
		char s[55][60];
		int t[55];
		maior = -1;
		for(i =0;i<n;i++){
			scanf("%s%*c",s[i]);
			t[i] = strlen(s[i]);
			if(t[i] > maior) maior = t[i];
		}
		for(i = 0;i<n;i++){
			int j;
			for(j = 0;j<maior-t[i];j++) printf(" ");
			printf("%s\n",s[i]);
		}
		
	}
	return 0;
}
