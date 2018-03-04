#include <stdio.h>
int min(int a,int b){
	return a < b ? a : b;
}
int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		int i;
		int d[100] = {0};
		int e[100] = {0};
		int t = 0;
		for(i = 0;i<n;i++){
			int tam;
			char pe;
			scanf("%d %c",&tam,&pe);
			if(pe == 'D'){
				d[tam]++;
			}else{
				e[tam]++;
			}
		}
		for(i = 30;i<=60;i++){
			t += min(d[i],e[i]);
		}
		printf("%d\n",t);		
	}
	return 0;
}
