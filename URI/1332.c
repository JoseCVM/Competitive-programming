#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d%*c",&t);
	while(t--){
		char s[10];
		scanf("%s",s);
		int n1 = 0, n2 = 0;
		int tam = strlen(s);
		char *p;
	
		char pal1[6] = "one", pal2[6] = "two", pal3[6] = "three";
		if(tam == 5) p = pal3;
		else{
			int i;
			for(i = 0;i<tam;i++){
				if(s[i] != pal1[i]) n1++;
				if(s[i] != pal2[i]) n2++;
			}	
			if(n1 <= 1) p = pal1;
			else p = pal2;
		}
		if(p == pal3) printf("3\n");
		if(p == pal2) printf("2\n");
		if(p == pal1) printf("1\n");
	}
	return 0;
}
