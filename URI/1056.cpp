#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pi;
typedef long long int ll;
int mt[220];
bool vis[220];
vector<int> g[220];
bool kuhn(int u){
	if(vis[u]) return false;
	vis[u] = true;
	for(auto& v : g[u]){
		if(mt[v] == -1 || kuhn(mt[v])){
			mt[v] = u;
			return true;
		}		
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	int tc;
	cin >> tc;
	int cas = 1;
	while(tc--){
		cout << "Case " << cas << ": ";
		cas++;
		memset(mt,-1,sizeof(mt));
		memset(vis,false,sizeof(vis));
		for(int i = 0;i<220;i++) g[i].clear();
		int a[110], b[110];
		int n, m;
		cin >> n;
		for(int i = 0;i<n;i++) cin >> a[i];
		
		cin >> m;
		for(int i = 0;i<m;i++) cin >> b[i];
		
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				if((b[j] == 0 && a[i] == 0) || (a[i] != 0 && b[j]%a[i] == 0)){
					g[i].push_back(j+n);
					g[j+n].push_back(i);
				}
			}
		}
		
		for(int i = 0;i<n+m;i++){
			memset(vis,false,sizeof(vis));
			kuhn(i);
		}
		int res = 0;
		for(int i = 0;i<n;i++){				
			if(mt[i] != -1){
				res++;
			}
		}
		cout << res << '\n';
	}

	return 0;
}

