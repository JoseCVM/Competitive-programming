#include <stdio.h>

int main(){
	int n;
	int t;
	scanf("%d",&t);
	while(t--){
		int g[1000][1000] = {{0}};
		int s;
		int v, a;
		int i;
		int res = 0;
		scanf("%d",&s);
		scanf("%d %d",&v,&a);
		for(i = 0;i<a;i++){
			int x, y;
			scanf("%d %d",&x,&y);
			if(g[x][y] == 0){
				g[x][y] = g[y][x] = 1;
				res+=2;
			}
		}
		printf("%d\n",res);
	}
	return 0;
}
