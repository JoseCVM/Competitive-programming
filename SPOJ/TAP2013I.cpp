#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
int m, n;
int mapa[510][510];
bool vis[510][510] = {{false}};
bool ok(ll i, ll j){
	return i >= 1 && i <= n && j >= 1 && j <= m ;
}
struct node{
	int x, y, t;
	node(int a,int b, int c){
		x = a;
		y = b;
		t = c;
	}
};
pair<int,int> v[4] = {{1,0},{-1,0},{0,1},{0,-1}};
bool test(int t){	
	bool vis[510][510] = {{false}};
	if(t >= mapa[1][1]) return false;
	node k(1,1,t);
	queue<node> q;
	q.push(k);
	while(!q.empty()){
		node at = q.front();
		q.pop();
	//	cout <<  "ESTOU EM " << at.x << " " << at.y <<" COM ALTURA " <<at.t << '\n';
		if(at.x == n && at.y == m) return true;
		for(int i = 0;i<4;i++){
			node novo(at.x+v[i].first,at.y+v[i].second,at.t+1);
			if(ok(novo.x,novo.y) && novo.t < mapa[novo.x][novo.y]){
	//			cout <<  "INDO PARA " << novo.x << " " << novo.y <<" COM ALTURA " << novo.t << "VIS = " << vis[novo.x][novo.y] << '\n';
				if(vis[novo.x][novo.y] == false){
					vis[novo.x][novo.y] = true;
					q.push(novo);
				}
			}
		}
	}
	return false;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			cin >> mapa[i][j];
		}
	}
//	if(test(0)){
		int lo = 0, hi = 100000000;
		int mid;
		int lastok = -1;
		while(lo <= hi){
			mid = (lo+hi)/2;
	//		cout << "VAMOS TESTAR " << mid << "\n";
			if(test(mid)){
				lo = mid+1;
				lastok = mid;
			}else{
				hi = mid-1;
			}
		}
		cout << lastok << '\n';
//	}else{
//		cout << -1 << '\n';
//	}
	
	return 0;
}
