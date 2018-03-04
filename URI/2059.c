#include <stdio.h>

int main(){
	int e;
	int p1, p2, c, a;
	int w;
	scanf("%d %d %d %d %d",&e,&p1,&p2,&c,&a);
	if(c == 0 && a == 0){
		if(e == 1){
			if((p1+p2)%2 == 0){
				w = 0;
			}else{
				w = 1;		
			}
		}else{
			if(p1+p2)%2 == 0){
				w = 1;
			}else{
				w = 0;		
			}
		}
	}else if(c == 0 && a == 1){
		w = 0;
	}else if(c == 1 && a == 0){
		w = 0;
	}else if(c == 1 && a == 1){
		w = 1;
	}
	printf("Jogador %d ganha!\n",w+1);	
	return 0;
}
