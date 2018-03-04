#include <stdio.h>

unsigned long long int fat[21];
int main(){
	int i;
	fat[0] = 1;
 	for(i = 1;i<21;i++){
		fat[i] = fat[i-1]*i;
	}
	int x, y;
	while(scanf("%d %d",&x,&y) != EOF){
		printf("%llu\n",fat[x]+fat[y]);
	}
	return 0;
}
