#include <stdio.h>
#include <math.h>
int main(){
	int i, h, n;
	scanf("%d %d",&h,&n);	
	int c, prev, flag = 1;
	scanf("%d",&prev);
	for(i = 1;i<n;i++){
		scanf("%d",&c);
		if(abs(c - prev) > h && flag == 1){
			printf("GAME OVER\n");
			flag = 0;
		}
		prev = c;
	}
	if(flag == 1) printf("YOU WIN\n");
	return 0;
}
