#include <stdio.h>
int main(){
	int i, j;
	for(i = 1, j = 7;;j--){
		if(j == 4){
			j = 7;
			i+=2;
		}
		printf("I=%d J=%d\n",i,j);
		if(i == 9 && j == 5) break;
	}
	return 0;
}
