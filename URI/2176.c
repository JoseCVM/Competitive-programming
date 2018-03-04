#include <stdio.h>

int main(){
	char c;
	int a = 0;
	while(scanf("%c",&c) != EOF){
		if(c == '1') a++;
		if(c != '\n') printf("%c",c);
	}
	printf("%d\n",a%2);
	return 0;
}
