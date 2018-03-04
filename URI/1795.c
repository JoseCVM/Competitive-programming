#include <stdio.h>
long long int pow(int n, int e){
	if(e == 0) return 1;
	if(e == 1) return n;
	if(n == 2) return n*n;
	long long int a = pow(n,e/2);
	long long int b = pow(n,e/2);
	if(e%2 == 0){
		return a*b;
	}else{
		return a*b*n;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld\n",pow(3,n));
	return 0;	
}
