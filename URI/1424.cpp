#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;


vector<int> res[1000010];

int main(){
	ios_base::sync_with_stdio(false);
	int n, m;
	while(cin >> n >> m){
		int v[n];
		for(int i = 0;i<n;i++){
			cin >> v[i];
			res[v[i]].push_back(i+1);			
		}
		for(int i = 0;i<m;i++){
			int a, b;
			cin >> a >> b;
			if(a > res[b].size()) cout << 0;
			else cout << res[b][a-1];
			cout << '\n';
		}
		for(int i = 0;i<1000010;i++) res[i].clear();
	}

	return 0;
}

