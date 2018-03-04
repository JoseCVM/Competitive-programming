#include <stdio.h>

int min(int a, int b){
	return a < b ? a : b;
}

int main(){
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	int m1= min(min(a,b),c);
	printf("%d\n",m1);
	if(m1 == a){
		int m2 = min(b,c);
		printf("%d\n",m2);
		if(m2 == b) printf("%d\n",c);
		else printf("%d\n",b);
	}else	
	if(m1 == b){
		int m2 = min(a,c);
		printf("%d\n",m2);
		if(m2 == c) printf("%d\n",a);
		else printf("%d\n",c);
	}else	
	if(m1 == c){
		int m2 = min(b,a);
		printf("%d\n",m2);
		if(m2 == b) printf("%d\n",a);
		else printf("%d\n",b);
	}
	printf("\n%d\n%d\n%d\n",a,b,c);
	return 0;
}
