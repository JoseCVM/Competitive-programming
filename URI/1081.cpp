#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;


void dfs(int v, int n,set<int> g[],bool vis[]){
	vis[v] = true;
	for(auto& it : g[v]){
		for(int i = 0;i<n;i++) cout << " ";
		cout << v << "-" << it;
		if(!vis[it]){				
			cout << " pathR(G,"<<it<<")\n";
			dfs(it,n+2,g,vis);
		}else{
			cout << "\n";
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for(int num = 0;num < t;num++){
		set<int> g[21];
		bool vis[21] = {false};
		cout << "Caso "<< num+1<<":\n";
		int v, e;
		cin >> v >> e;
		for(int i = 0;i<e;i++){
			int u, d;
			cin >> u >> d;
			g[u].insert(d);
		}
		for(int i = 0;i<v;i++){
			if(!vis[i] && !g[i].empty()){
				dfs(i,2,g,vis);
				cout <<"\n";
			}
		}
	}

	return 0;
}

