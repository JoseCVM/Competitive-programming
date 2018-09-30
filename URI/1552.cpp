#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

int p[600], r[600];
void make_set(int x){
	p[x] = x;
	r[x] = 0;
}
int dsu_get(int v){
	return (v == p[v]) ? v : (p[v] = dsu_get(p[v]));
}
void dsu_unite(int x, int y){
	x = dsu_get(x);
	y = dsu_get(y);
	if(r[x] > r[y])
		p[y] = x;
	else{
		p[x] = y;
		if(r[x] == r[y]) r[y]++;
	}
		
}
ll dist(pair<int,int> a, pair<int,int> b){
	return (a.first - b.first)*(a.first - b.first) + (a.second - b.second)*(a.second - b.second);
}

pair<int,int> pos[700];
ll kruskal(vector<pair<ll,pair<int,int>>> g,int m){
	memset(p,-1,sizeof(p));
	for(int i = 0;i<600;i++) make_set(i);
	ull res = 0;
	vector<pair<int,int>> r;
	sort(g.begin(),g.end());
	for(int i = 0;i<g.size();i++){
		int a = g[i].second.first, b = g[i].second.second, l = g[i].first;
		if(dsu_get(a) != dsu_get(b)){
			r.push_back(make_pair(g[i].second.first,g[i].second.second));
			dsu_unite(a,b);
		}
	}
	for(int i = 0;i<m;i++){
		res += sqrt(dist(pos[r[i].first],pos[r[i].second]));
	}
	return res;
}

int main(){
	//ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<pair<ll,pair<int,int>>> v;
		for(int i = 0;i<n;i++) cin >> pos[i].first >> pos[i].second;
		for(int i = 0;i<n;i++){
			for(int j = i+1;j<n;j++){
				ll d = dist(pos[i],pos[j]);
				if(d){					
					v.push_back(make_pair(d,make_pair(i,j)));
				}
			}
		}
		double res = (double)kruskal(v,n)/10000;
		printf("%.2lf\n",res);
	}

	return 0;
}

