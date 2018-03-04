#include <stdio.h>
int min(int a, int b){
	return a > b ? b : a;
}
int main(){
	int x, z;
	scanf("%d",&x);
	while(1){
		scanf("%d",&z);
		if(z > x) break;
	}
	int n = 1;
	int s = x;
	while(s < z){
		x++;
		s+=x;
		n++;
	}
	printf("%d\n",n);
	return 0;
}
