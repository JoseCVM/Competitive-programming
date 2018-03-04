#include <stdio.h>
int max(int a, int b){
	return a > b ? a : b;
}
int min(int a, int b){
	return a < b ? a : b;
}
int gcd(int a, int b){
	while(a > 0){
		int aux = a;
		a = b%a;
		b = aux;
	}
	return b;
}
int main(){
	int a, b, c;
	while(scanf("%d %d %d",&a,&b,&c) != EOF){
		int h, cat, ct;
		h = max(a,max(b,c));
		cat = min(a,min(b,c));
		ct = max(min(a,b), min(max(a,b),c));
		if(h*h == cat*cat + ct*ct){
			if(gcd(a,gcd(b,c)) == 1){
				printf("tripla pitagorica primitiva\n");
			}else{
				printf("tripla pitagorica\n");
			}
		}else{
			printf("tripla\n");
		}
	}
	return 0;
}

