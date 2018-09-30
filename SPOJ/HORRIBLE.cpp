#include <bits/stdc++.h>
#define MAX 100010
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
ll tree[4*MAX];
ll lazy[4*MAX];
ll arr[MAX];
void update(ll v, ll ss, ll se,ll l, ll r, ll val){
	if(lazy[v] != 0){
		tree[v] += (se 	- ss+1)*lazy[v];
		if(ss != se){
			lazy[v*2] += lazy[v];
			lazy[v*2 + 1] += lazy[v];
		}
		lazy[v] = 0;
	}
	if(ss > se || ss > r || se < l) return;
	if(ss >= l && se <= r){
		tree[v] += (se - ss + 1)*val;
		if(ss != se){
			lazy[v*2] += val;
			lazy[v*2 + 1] += val;
		}
		return;
	}
	ll m = (ss+se)/2;
	update(v*2,ss,m,l,r,val);
	update(v*2+1,m+1,se,l,r,val);
	tree[v] = tree[v*2] + tree[v*2+1];
	return;
}
ll query(ll v, ll ss, ll se, ll l, ll r){
	if(ss > se || ss > r || se < l) return 0;
	if(lazy[v] != 0){
		tree[v] += (se - ss + 1)*lazy[v];
		if(ss != se){
			lazy[v*2] += lazy[v];
			lazy[v*2 + 1] += lazy[v];
		}
		lazy[v] = 0;
	}
	if(ss >= l && se <= r) return tree[v];
	ll m = (ss + se)/2;
	ll esq = query(v*2,ss,m,l,r);
	ll dir = query(v*2+1,m+1,se,l,r);
	return esq+dir;
}
void make(ll ss,ll se,ll v){
	if(ss > se) return;
	if(ss == se){
		tree[v] = arr[v];
		return;
	}
	ll m = (ss+se)/2;
	make(ss,m,v*2);
	make(m+1,se,v*2+1);
	tree[v] = tree[v*2] + tree[v*2+1];
}
int main(){
	ios_base::sync_with_stdio(false);
	ll TC;
	cin >> TC;
	while(TC--){
		memset(arr,0,MAX*sizeof(ll));
		memset(tree,0,4*MAX*sizeof(ll));
		memset(lazy,0,4*MAX*sizeof(ll));
		ll N, C;
		cin >> N >> C;
		for(int i = 0;i<C;i++){
			int cmd;
			cin >> cmd;
			if(cmd == 0){
				ll l,r,val;
				cin >> l >> r >> val;
				update(1,1,N,l,r,val);
			}else{
				ll p,q;
				cin >> p >> q;
				cout << query(1,1,N,p,q) << '\n';
			}
		}
	}

	return 0;
}
