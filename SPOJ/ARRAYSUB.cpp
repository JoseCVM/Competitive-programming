#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;
#define MAX 1000010
int arr[MAX], tree[4*MAX];
int query(int v, int l, int r, int ss, int se){
	if(ss > se || ss > r || se < l) return -1;
	if(ss >= l && se <= r) return tree[v];
	int m = (ss+se)/2;
	return max(query(2*v+1,l,r,ss,m),query(2*v+2,l,r,m+1,se));
}
void make(int v, int ss, int se){
	if(ss > se) return;
	if(ss == se){
		tree[v] = arr[ss];
		return;
	}
	int m = (ss+se)/2;
	make(2*v+1,ss,m);
	make(2*v+2,m+1,se);
	tree[v] = max(tree[2*v+1],tree[2*v+2]);
}
int main(){
	ios_base::sync_with_stdio(false);
	int n, k;
	vector<int> res;
	cin >> n;
	for(int i = 0;i<n;i++) cin >> arr[i];
	make(0,0,n);
	cin >> k;
	for(int i = 0;i<=n-k;i++){
		cout << query(0,i,i+k-1,0,n) << ' ';
	}
	return 0;
}
