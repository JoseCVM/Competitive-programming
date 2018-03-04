#include <stdio.h>

int main(){
	char teclado[100]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
	char str[100000];
	while(scanf("%[^\n]%*c",str) != EOF){
		int t = strlen(str);
		int i;
		for(i = 0;i<t;i++){
			if(str[i] != ' '){
				int j = 0;
				while(teclado[j] != str[i]) j++;
				str[i] = teclado[j-1];
			}
		}
		printf("%s\n",str);
	}
	return 0;
}
