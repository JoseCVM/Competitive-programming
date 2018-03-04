#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, i;
		int v[1010], f[1010];
		scanf("%d",&n);
		for(i = 0;i<n;i++){
			scanf("%d",&v[i]);
			f[i] = v[i];
		}
		int cnt = 0;
		sort(v,v+i,greater<int>());
		for(i = 0;i<n;i++){
			if(f[i] != v[i]) cnt++;
		}
		printf("%d\n",n-cnt);
	}
	return 0;
}
