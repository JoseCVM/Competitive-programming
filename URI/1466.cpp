#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pi;
typedef long long int ll;


void build(int r, int t[], int v[]){
	
}
int main(){
	ios_base::sync_with_stdio(false);

	int tc, ca = 1;
	cin >> tc;
	while(tc--){
		cout << "Case " << ca << ":\n";
		ca++;
		int n;
		cin >> n;
		int v[550], t[550];
		queue<pi> q;
		for(int i= 0;i<n;i++){
			cin >> t[i];
		}
		build(0,t,v);
		q.push(make_pair(0,v[0]));
		while(!q.empty()){
			pi t = q.front();
			cout << "pop " << t.first << '\n';
			q.pop();
			if(t.first*2 + 1 < n){
				cout << "push " << t.first*2+1 << '\n';
				q.push(make_pair(t.first*2+1,v[t.first*2+1]));
			}
			if(t.first*2 + 2 < n){
				cout << "push " << t.first*2+2 << '\n';
				q.push(make_pair(t.first*2+2,v[t.first*2+2]));
			}
		}
	
	}
	return 0;
}

