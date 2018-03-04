#include <stdio.h>
int max(int a,int b){
	return a > b? a :b;
}
int min(int a,int b){
	return a < b? a :b;
}
int main(){
	int m, n;
	int ini, fim;
	int i, s = 0;
	scanf("%d %d",&m,&n);
	
	ini = min(m,n);
	fim = max(m,n);
	if(ini%2 == 0){
		ini++;
	}else{
		ini +=2;
	}
	if(fim %2 == 0){
		fim--;
	}else{
		fim-=2;
	}
	for(i = ini;i<=fim;i+=2){
		s+=i;
	}
	printf("%d\n",s);
	return 0;
}
