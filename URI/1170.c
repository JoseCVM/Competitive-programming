#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double f;
		scanf("%lf",&f);
		printf("%d dias\n",(int)ceil(log2(f)));
	}
	return 0;
}
