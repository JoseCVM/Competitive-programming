#include <stdio.h>

int main(){
	char c;	
	int bold = 0;
	int it = 0;
	while(scanf("%c",&c) != EOF){
		if(c == '_' && it == 0){
			printf("<i>");
			it = 1;
		}else if(c == '_' && it == 1){
			printf("</i>");
			it = 0;
		}else if(c == '*' && bold == 0){
			printf("<b>");
			bold = 1;
		}else if(c == '*' && bold == 1){
			printf("</b>");
			bold = 0;
		}else{
			printf("%c",c);
		}		
	}
	return 0;
}
