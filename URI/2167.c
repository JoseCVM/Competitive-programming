#include <stdio.h>

int main(){
	int n, v, ant, i, p = 0;
	scanf("%d",&n);
	scanf("%d",&ant);
	for(i = 1;i<n;i++){
		scanf("%d",&v);
		if(v < ant && p == 0) p = i+1;
		ant = v;
	}
	printf("%d\n",p);
	return 0;
}
