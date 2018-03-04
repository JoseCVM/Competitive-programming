#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int i, t, media = 0;
		int cnt = 0;
		double m;
		int nota[1010];
		scanf("%d",&t);
		for(i = 0;i<t;i++){
			scanf("%d",&nota[i]);
			media+=nota[i];
		}
		m = (double)media/t;
		for(i = 0;i<t;i++){
			if(nota[i] > m){
				cnt++;
			}
		}
		printf("%.3lf%%\n",(double)(cnt*100)/t);
	}
	return 0;
}
