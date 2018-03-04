#include <stdio.h>

int main(){
	int n, i;
	while(scanf("%d",&n) != EOF){
		if(n == 0) break;
		int p1 = 0, p2 = 0;
		for(i = 0;i<n;i++){
			int a, b;
			scanf("%d %d",&a,&b);
			if(a > b) ++p1;
			if(b > a) ++p2; 
		}
		printf("%d %d\n",p1,p2);		
	}
	return 0;
}
