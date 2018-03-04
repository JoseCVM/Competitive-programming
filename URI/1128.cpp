#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

void dfs(int v, list<int> g[],bool vis[]){
	vis[v] = true;
	for(auto& it : g[v]){
		if(!vis[it]) dfs(it,g,vis);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	int m, n;
	while((cin>> n >>m) && m && n){
		list<int> g[2010];
		list<int> gt[2010];
		bool vis[2010] = {false};
		bool vist[2010] = {false};
		for(int i = 0;i<m;i++){
			int v, w, p;
		
			cin >> v >> w >> p;	
			v--;
			w--;
			g[v].push_back(w);
			gt[w].push_back(v);
			if(p == 2){
				gt[v].push_back(w);
				g[w].push_back(v);
			}
		}
		bool res = true;
		dfs(0,g,vis);
		for(int i = 0;i<n;i++){
			if(!vis[i]) res = false;
		}
		if(res){
			dfs(0,gt,vist);
			for(int i = 0;i<n;i++)
				if(!vist[i]) res = false;
		}
		cout << (res?1:0) << '\n';
	}

	return 0;
}

