#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int h = n/3600;
	int m = (n%3600)/60;
	int s = n - m*60 - h*3600;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}
