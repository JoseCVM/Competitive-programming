#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pi;
typedef long long int ll;
#define MAX 100010
ll trees[4*MAX];
ll lazys[4*MAX];
ll treem[4*MAX];
ll lazym[4*MAX];
ll arr[MAX];
void updates(ll v, ll ss, ll se,ll l, ll r, ll val){
	if(lazys[v] != 0){
		trees[v] = (se 	- ss+1)*lazys[v];
		if(ss != se){
			lazys[v*2] = lazys[v];
			lazys[v*2 + 1] = lazys[v];
		}
		lazys[v] = 0;
	}
	if(ss > se || ss > r || se < l) return;
	if(ss >= l && se <= r){
		trees[v] = (se - ss + 1)*val;
		if(ss != se){
			lazys[v*2] = val;
			lazys[v*2 + 1] = val;
		}
		return;
	}
	ll m = (ss+se)/2;
	updates(v*2,ss,m,l,r,val);
	updates(v*2+1,m+1,se,l,r,val);
	trees[v] = trees[v*2] + trees[v*2+1];
	return;
}
ll querys(ll v, ll ss, ll se, ll l, ll r){
	if(ss > se || ss > r || se < l) return 0;
	if(lazys[v] != 0){
		trees[v] = (se - ss + 1)*lazys[v];
		if(ss != se){
			lazys[v*2] = lazys[v];
			lazys[v*2 + 1] = lazys[v];
		}
		lazys[v] = 0;
	}
	if(ss >= l && se <= r) return trees[v];
	ll m = (ss + se)/2;
	ll esq = querys(v*2,ss,m,l,r);
	ll dir = querys(v*2+1,m+1,se,l,r);
	return esq+dir;
}
void makes(ll ss,ll se,ll v){
	if(ss > se) return;
	if(ss == se){
		trees[v] = arr[ss];
		return;
	}
	ll m = (ss+se)/2;
	makes(ss,m,v*2);
	makes(m+1,se,v*2+1);
	trees[v] = trees[v*2] + trees[v*2+1];
}


void updatem(ll v, ll ss, ll se,ll l, ll r, ll val){
	if(lazym[v] != 0){
		treem[v] = lazym[v];
		if(ss != se){
			lazym[v*2] = lazym[v];
			lazym[v*2 + 1] = lazym[v];
		}
		lazym[v] = 0;
	}
	if(ss > se || ss > r || se < l) return;
	if(ss >= l && se <= r){
		treem[v] = val;
		if(ss != se){
			lazym[v*2] = val;
			lazym[v*2 + 1] = val;
		}
		return;
	}
	ll m = (ss+se)/2;
	updatem(v*2,ss,m,l,r,val);
	updatem(v*2+1,m+1,se,l,r,val);
	treem[v] = min(treem[v*2] , treem[v*2+1]);
	return;
}
ll querym(ll v, ll ss, ll se, ll l, ll r){
	if(ss > se || ss > r || se < l) return INT_MAX-1;
	if(lazym[v] != 0){
		treem[v] = lazym[v];
		if(ss != se){
			lazym[v*2] = lazym[v];
			lazym[v*2 + 1] = lazym[v];
		}
		lazym[v] = 0;
	}
	if(ss >= l && se <= r) return treem[v];
	ll m = (ss + se)/2;
	ll esq = querym(v*2,ss,m,l,r);
	ll dir = querym(v*2+1,m+1,se,l,r);
	return min(esq,dir);
}
void makem(ll ss,ll se,ll v){
	if(ss > se) return;
	if(ss == se){
		treem[v] = arr[ss];
		return;
	}
	ll m = (ss+se)/2;
	makem(ss,m,v*2);
	makem(m+1,se,v*2+1);
	treem[v] = min(treem[v*2],treem[v*2+1]);
}
int main(){
	ios_base::sync_with_stdio(false);
	int n, k;
	while(cin >> n >> k){
		memset(arr,0,MAX*sizeof(ll));
		memset(trees,0,4*MAX*sizeof(ll));
		memset(lazys,0,4*MAX*sizeof(ll));
		memset(treem,0,4*MAX*sizeof(ll));
		memset(lazym,0,4*MAX*sizeof(ll));
		for(int i = 1;i<=n;i++){
			int x;
			cin >> x;
			if(x > 0) arr[i] = 4;
			else if(x < 0) arr[i] = 3;
			else if(x == 0) arr[i] = 2;
		}
		makes(1,n,1);
		makem(1,n,1);
		while(k--){
			char c;
			int l, r;
			cin >> c >> l >> r;
			if(c == 'C'){
				if(r > 0) r = 4;
				else if(r < 0) r = 3;
				else r = 2;
				updates(1,1,n,l,l,r);
				updatem(1,1,n,l,l,r);
			}else{
				ll sum = querys(1,1,n,l,r);
				ll min = querym(1,1,n,l,r);
				if(min == 2){
					cout << 0;
				}else if(sum%2 == 0){
					cout << '+';
				}else{
					cout << '-';
				}
			}
		}
		cout << '\n';		
	}
	return 0;
}

