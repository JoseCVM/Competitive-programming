#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;
#define MAX 100010
ll max(ll a, ll b, ll c){
	return max(a,max(b,c));
}


ll arr[MAX],tree[4*MAX],n;
ll mini(int i, int j){
	if(i == -1) return j;
	if(j == -1) return i;
	return arr[i] < arr[j] ? i : j;
}
void make(int v, int ss, int se){
	if(ss == se){
		tree[v] = ss;
		return;
	}
	int m = (ss+se)/2;
	make(2*v+1,ss,m);
	make(2*v+2,m+1,se);
	tree[v] = mini(tree[2*v+1],tree[2*v+2]);
}
int query(int ss, int se, int l, int r, int v){
	if(ss > se || ss > r || se < l) return -1;
	if(ss >= l && se <= r)	return tree[v];	
	int m = (ss+se)/2;
	return mini(query(ss,m,l,r,2*v+1), query(m+1,se,l,r,2*v+2));
}
ll solve(int l, int r){
	if(l == r) return arr[l];
	if(l > r) return -1;
	int m = query(0,n-1,l,r,0);	
	return max(solve(l,m-1),arr[m]*(r-l+1),solve(m+1,r));
}
int main(){
	ios_base::sync_with_stdio(false);
	while(cin >> n && n){
		for(int i = 0;i<n;i++) cin >> arr[i];
		make(0,0,n-1);
		cout << solve(0,n-1) << '\n';
	}

	return 0;
}
