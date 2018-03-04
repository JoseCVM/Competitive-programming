#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",(int)ceil((double)b/(b-a)));
	return 0;
}
