#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i, trem[60];
		for(i = 0;i<n;i++) scanf("%d",&trem[i]);
		int s = 1;
		int cnt = 0;
		while(s){
			s = 0;
			for(i = 1;i<n;i++){
				if(trem[i]<trem[i-1]){
					int a = trem[i];
					trem[i] = trem[i-1];
					trem[i-1] = a;
					s = 1;
					cnt++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",cnt);
	}
	return 0;
}
