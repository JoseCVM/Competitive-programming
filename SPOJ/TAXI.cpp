#include <bits/stdc++.h>
#define MAX 750
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> pl;
ll P, T, S, C;
vector<pl> ps, tx;
ll dist(pl a, pl b){
	return 200*(abs(a.first - b.first) + abs(a.second - b.second));
}
vector<ll> g[MAX];
bool vis[MAX];
ll mt[MAX];

bool dfs(int v){
	if(vis[v]) return false;
	vis[v] = true;
	for(auto& it : g[v]){
		if(mt[it] == -1 || dfs(mt[it])){
			mt[it] = v;
			return true;
		}
	}
	return false;
}
int main(){
	int TC;
	cin >> TC;
	while(TC--){
		cin >> P >> T >> S >> C;
		for(int i = 0;i<MAX;i++) g[i].clear();
		ps.clear();
		tx.clear();
		for(int i = 0;i<P;i++){
			ll x, y;
			cin >> x >> y;
			ps.push_back(make_pair(x,y));
		}	
		for(int i = 0;i<T;i++){
			ll x, y;
			cin >> x >> y;
			tx.push_back(make_pair(x,y));
			for(int j = 0;j<P;j++){
				if(dist(ps[j],make_pair(x,y)) <= S*C){
					g[j].push_back(i+ps.size());
					g[i+ps.size()].push_back(j);
				}
			}
		}	
		for(int i = 0;i<MAX;i++){
			mt[i] = -1;
		}
		int V = ps.size() + tx.size();
		for(int i = 0;i<V;i++){
			memset(vis,false,sizeof(vis));
			dfs(i);
		}
		ll res = 0;
		for(int i = 0 ; i < V ; i++) if(mt [i] != -1 ) res++;
		cout << res/2 << '\n';
	}
}