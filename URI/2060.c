#include <stdio.h>

int main(){
	int n, i,c[6] = {0};
	scanf("%d",&n);
	for(i = 0;i<n;i++){
		int val;
		scanf("%d",&val);
		if(val%2 == 0) c[2]++;
		if(val%3 == 0) c[3]++;
		if(val%4 == 0) c[4]++;
		if(val%5 == 0) c[5]++;
	}
	for(i = 2;i<=5;i++){
		printf("%d Multiplo(s) de %d\n",c[i],i);
	}
	return 0;
}
