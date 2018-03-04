#include <stdio.h>
int max(int a,int b){
	return a > b ? a : b;
}
int min(int a, int b){
	return a < b ? a : b;
}
int main(){
	int n;
	int la, lb, sa, sb;
	scanf("%d",&n);
	scanf("%d %d",&la,&lb);
	scanf("%d %d",&sa,&sb);
	if(n >= max(la,sa) && n <= min(lb,sb)) printf("possivel\n");
	else printf("impossivel\n");
	return 0;
}
