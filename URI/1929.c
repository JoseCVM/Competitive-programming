#include <stdio.h>
int main(){
	int a, b, c, d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if((a+b>c && a+c>b && c+b>a) || (a+c>d && a+d > c && d+c>a) || (b+c>d && b+d>c &&c+d>b)||(a+b>d && a+d > b && d+b>a)) printf("S\n");
	else printf("N\n");
	return 0;
}
