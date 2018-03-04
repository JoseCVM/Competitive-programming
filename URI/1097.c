#include <stdio.h>

int main(){
	int i, j;
	int prev = 7;
	i = 1;
	j = 7;
	while(1){
		printf("I=%d J=%d\n",i,j);
		if(j == 13 && i == 9) break;
		j--;
		if(j == prev - 3){
			j = prev + 2;
			prev = j;
			i+=2;
		}
	
	}
	return 0;
}
