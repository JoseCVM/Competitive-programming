#include <stdio.h>

int main(){
	int k;
	while(1){
		scanf("%d",&k);
		if(k == 0) break;
		int i, ox, oy;
		scanf("%d %d",&ox,&oy);
		for(i = 0;i<k;i++){
			int x, y;
			scanf("%d %d",&x,&y);
			if(x == ox || y == oy){
				printf("divisa\n");
			}else if(x < ox && y > oy){
				printf("NO\n");
			}else if(x > ox && y > oy){
				printf("NE\n");
			}else if(x > ox && y < oy){
				printf("SE\n");
			}else if(x < ox && y < oy){
				printf("SO\n");
			}
		}		
	}
	return 0;
}
