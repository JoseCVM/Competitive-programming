#include <stdio.h>

int main(){
	int v[5],x[5];
	int i, flag = 0;
	for(i = 0;i<5;i++){
		scanf("%d",&v[i]);
	}
	for(i = 0;i<5;i++){
		scanf("%d",&x[i]);
	}
	for(i = 0;i<5;i++){
		if(v[i] == x[i]) flag = 1;
	}
	if(flag == 0) printf("Y\n");
	else printf("N\n");
	return 0;
}
