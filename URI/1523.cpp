#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n, k;
	while(cin >> n >> k && n && k){
		bool ok = true;
		int t = 1, maxt = -1;
		stack<pair<int,int>> q;
		for(int i = 1;i<=n;i++){
			int c, s;
			cin >> c >> s;
			maxt = max(maxt,s);
			while(t <= c){
				if(!q.empty() && q.top().second == t) q.pop();
				t++;
			}
			q.push(make_pair(c,s));
			if(q.size() > k) ok = false;
		}
		while(t <= maxt){
			if(!q.empty() && q.top().second == t) q.pop();
			t++;
		}
		if(!q.empty()) ok = false;
		if(ok) cout << "Sim\n";
		else cout <<"Nao\n";
	}
	return 0;
}

