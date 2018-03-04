#include <stdio.h>
int max(int a,int b){
	return a > b? a :b;
}
int min(int a,int b){
	return a < b? a :b;
}
int main(){
	while(1){
		int a, b;
		scanf("%d %d",&a,&b);
		if(a <= 0 || b <= 0) break;
		int i, s = 0;
		for(i = min(a,b);i<=max(a,b);i++){
			printf("%d ",i);
			s+=i;
		}
		printf("Sum=%d\n",s);
	}
	return 0;
}
