#include <stdio.h>

int main(){
	int a, b, c;
	while(scanf("%d %d %d",&a,&b,&c) != EOF){
		if(a != b && a != c) printf("A\n");
		if(b != a && b != c) printf("B\n");
		if(c != b && c != a) printf("C\n");
		if(a == b && a == c) printf("*\n");
	}
	return 0;
}
