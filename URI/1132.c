#include <stdio.h>
int main(){
	int a, b, x, y;
	scanf("%d %d",&a,&b);
	if(a > b){
		int aux = a;
		a = b;
		b = aux;
	}
	if(a % 13 == 0){
		x = a;
	}else{
		x = a + (13 - a%13);
	}
	if(b % 13 == 0){
		y = b;
	}else{
		y = b - b%13;
	}
	int n1,n2;
	n1 = b - a + 1;
	n2 = (y-x)/13 + 1;
	int s1, s2;
	s1 = ((a+b)*n1)/2;
	s2 = ((x+y)*n2)/2;
	printf("%d\n",s1-s2);
	return 0;
}
