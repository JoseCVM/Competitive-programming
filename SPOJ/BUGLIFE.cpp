#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;
#define MAX 2020
vector<int> g[MAX];
bool vis[MAX];
int cor[MAX];
bool dfs(int u){
	vis[u] = true;
	for(auto& v : g[u]){		
		if(cor[v] == cor[u]) return false;
		if(vis[v]) continue;
		if(cor[u] == 1) cor[v] = 2;
		else cor[v] = 1;
		if(!dfs(v)) return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	int tc, at = 1;
	
	cin >> tc;
	while(tc--){
		cout << "Scenario #" << at++ << ":\n";
		memset(vis,false,sizeof(vis));
		memset(cor,0,sizeof(cor));
		for(int i = 0;i<MAX;i++) g[i].clear();
		int n,m;
		cin >> n >> m;
		for(int i = 0;i<m;i++){
			int u, v;
			cin >> u >> v;
			g[u].push_back(v);	
			g[v].push_back(u);
		}
		bool res = true;
		for(int i = 0;i<n;i++){
			if(!vis[i]){
				cor[i] = 1;
				if(res)
					res = dfs(i);				
			}
		}
		if(res) cout << "No suspicious bugs found!\n";
		else cout << "Suspicious bugs found!\n";
	}
	return 0;
}
