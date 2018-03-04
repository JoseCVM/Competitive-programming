#include <stdio.h>

int main(){
	int v[6] = {2,5,10,20,50,100};
	int a, b;
	while(1){
		scanf("%d %d",&a,&b);
		if(a == b && b == 0) break;
		int i, j;
		int t = b-a;
		int f = 0;
		i = 0, j =5;
		while(i <= j){
			int s = v[i]+v[j];
			if(s > t) j--;
			if(s < t) i++;
			if(s == t) {
				f = 1;
				break;	
			}
		}
		if(f) printf("possible\n");
		else printf("impossible\n");
	}
	return 0;
}
