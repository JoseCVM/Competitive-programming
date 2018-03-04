#include <bits/stdc++.h>
using namespace std;
int knp(vector<pair<int,int>> ped, int n, int w){
	int m[40][40] = {{0}};
	int i, j;
	
	for(i = 0;i<=n;i++){
		for(j = 0;j<=w;j++){
			if(i == 0 || j == 0)m[i][j] = 0;
			else if(ped[i-1].second <= j) m[i][j] = max(m[i-1][j],m[i-1][j-ped[i-1].second] + ped[i-1].first);
			else m[i][j] = m[i-1][j];
		}
	}
	return m[n][w];
}
int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		if(n== 0) break;
		int p;
		scanf("%d",&p);
		vector<pair<int,int>> ped;
		int i;
		for(i = 0;i<n;i++){
			int a, b;
			scanf("%d %d",&a,&b);
			ped.push_back(make_pair(a,b));			
		}
		printf("%d min.\n",knp(ped,n,p));
	}
	return 0;
}
