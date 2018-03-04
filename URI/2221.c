#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int b, a,d,l,aa,dd,ll;
		scanf("%d",&b);
		scanf("%d %d %d",&a,&d,&l);
		scanf("%d %d %d",&aa,&dd,&ll);
		int g, du;
		du = (a+d)/2 + (l%2 == 0 ? b : 0);	
		g = (aa+dd)/2 + (ll%2 == 0 ? b : 0);
		if(du > g) printf("Dabriel\n");
		if(g > du) printf("Guarte\n");
		if(g == du) printf("Empate\n");
	}
	return 0;
}
