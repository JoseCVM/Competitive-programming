#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;
#define MAX 1010


int main(){
	ios_base::sync_with_stdio(false);
	
	int TC, at = 1;
	cin >> TC;
	while(TC--){
		cout << "Case " << at << ":\n";
		int p[MAX];
		at++;		
		int n;
		cin >> n;	
		for(int i = 1;i<=MAX;i++) p[i] = i;
		for(int i = 1;i<=n;i++){	
			int k;
			cin >> k;
			while(k--){
				int u;
				cin >> u;
				p[u] = i;
			}
		}
		int q;
		cin >> q;
		while(q--){
			int a, b;
			cin >> a >> b;
			bool vis[MAX]= {false};
			vis[a] = true;
			while(p[a] != a){
				vis[a] = true;
				a = p[a];	
			}
			vis[a] = true;
			while(vis[b] != true){
				b = p[b];
			}
			cout << b << '\n';
		}
	}
	

	return 0;
}
