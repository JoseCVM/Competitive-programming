#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a, c;
		char b;
		scanf("%d%c%d",&a,&b,&c);
		if(a == c) printf("%d\n",a*c);
		else if(b < 'a') printf("%d\n",c-a);
		else if(b >= 'a') printf("%d\n",a+c);
	}
	return 0;
}
