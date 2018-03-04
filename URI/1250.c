#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, i , v[55];
		char c;
		int h = 0;
		scanf("%d",&n);
		for(i =0;i<n;i++) scanf("%d",&v[i]);
		scanf("%*c");
		for(i = 0;i<n;i++){
			scanf("%c",&c);
			if(c == 'J' && v[i] > 2) h++;
			if(c == 'S' && v[i] <= 2) h++; 
		}
		printf("%d\n",h);
	}
	return 0;
}
