#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

typedef struct rena{
	int w,a;
	double h;
	string s;
} rena;
bool cmp(rena a, rena b){
	if(a.w == b.w){
		if(a.a == b.a){
			if(a.h == b.h){
				return a.s < a.s;
			}else{
				return a.h < b.h;
			}
		}else{
			return a.a < b.a;
		}
	}else{
		return a.w > b.w;
	}	
}
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for(int j = 1;j<=t;j++){
		int m, n;
		cout << "CENARIO {"<<j<<"}\n";
		vector<rena> v;
		cin >> n >> m;
		for(int i = 0;i<n;i++){
			rena r;
			cin >> r.s >> r.w >> r.a >> r.h;
			v.push_back(r);
		} 
		sort(v.begin(),v.end(),cmp);
		for(int i = 0;i<m;i++) cout << i+1 << " - " << v[i].s << '\n';	
	}

	return 0;
}

