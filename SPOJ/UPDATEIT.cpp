#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;
#define MAX 10010
ll bit[MAX], n, u;
void update(int p, int v){
	for(;p<=n;p+=p&(-p))	bit[p] += v;
}
void update(int l, int r, int v){
	update(l,v);
	update(r+1,-v);
}
ll query(int id){
	ll r = 0;
	for(;id>0;id-=id&(-id)) r += bit[id];
	return r;
}
int main(){
	ios_base::sync_with_stdio(false);
	int TC;
	cin >> TC;
	while(TC--){
		memset(bit,0,sizeof(bit));
		cin >> n >> u;
		for(int i = 0;i<u;i++){
			int l, r, v;
			cin >> l >> r >> v;
			update(l+1,r+1,v);
		}	
		int q;
		cin >> q;
		while(q--){
			int id;
			cin >> id;
			cout << query(id+1) << '\n';
		}
	}

	return 0;
}
