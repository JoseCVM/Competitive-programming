#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int x, y;
		int s = 0, i;
		scanf("%d %d",&x,&y);
		if(x%2 == 0) x++;	
		for(i = 0;i<y;i++){
			s += x;
			x += 2;
		}
		printf("%d\n",s);
	}
	return 0;
}
