#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int x, y;
		scanf("%d %d",&x,&y);
		int b, c, r;
		b = 2*x*x + 25*y*y;
		r = 9*x*x + y*y;
		c = -100*x + y*y*y;
		if(c > r && c > b) printf("Carlos ganhou\n");
		else if(b > r && b > c) printf("Beto ganhou\n");
		else if(r > b && r > c) printf("Rafael ganhou\n");
	}
	return 0;
}
