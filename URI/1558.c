#include <stdio.h>
#include <math.h>
int main(){
	unsigned long long int v[10005];
	int i;
	for(i = 0;i<10005;i++){
		v[i] = i*i;
	}
	int n;
	while(scanf("%d",&n) != EOF){
		int j = sqrt(n)+1, fl = 0;
		i = 0;
		while(i <= j){
			unsigned long long res = v[i] + v[j];
			if(res > n){
				j--;
			}else if(res < n){
				i++;
			}else{
				fl = 1;
				break;
			}
		}
		if(fl) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
