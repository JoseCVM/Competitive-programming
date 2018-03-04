#include <stdio.h>
int min(int a, int b){
	return a < b ? a : b;
}
int main(){
	int a, b;
	while(1){
		scanf("%d %d",&a,&b);
		if(a == b && b == 0) break;
		int al[100100] = {0}, be[100100] ={0};
		int i;
		for(i = 0;i<a;i++){
			int v;
			scanf("%d",&v);
			al[v]++;
		}
		int bhas = 0;
		for(i = 0;i<b;i++){
			int v;
			scanf("%d",&v);
			if(al[v] == 0 && be[v] == 0) bhas++;
			be[v]++;
		}
		int ahas = 0;
		for(i = 0;i<100010;i++){
			if(al[i] > 0 && be[i] == 0) ahas++;
		}
		printf("%d\n",min(ahas,bhas));
	}
	return 0;
}
