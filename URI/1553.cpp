#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	//ios_base::sync_with_stdio(false);
	int n, k;
	while((scanf("%d %d",&n,&k)) && n != 0 && k != 0){
		int v[110] = {0};
		for(int i = 0;i<n;i++){
			int a;
			scanf("%d",&a);
			v[a]++;
		}	
		int cnt = 0;
		for(int i = 0;i<101;i++){
			if(v[i] >= k){
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}

