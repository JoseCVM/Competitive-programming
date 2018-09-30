#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;
#define MAX 300100


int main(){
	ios_base::sync_with_stdio(false);
	int n, m;
	int v[MAX];
	cin >> n >> m;
	for(int i = 0;i<n;i++) cin >> v[i];
	int w = 0,ini = 0, res = -1;
	for(int i = 0;i<n;i++){
		res = max(w,res);
		while(i < n && w + v[i] > m)
			if(w + v[i] > m){
				w -= v[ini];
				ini++;
			}
		w += v[i];		
	}	
	res = max(w,res);
	cout << res << '\n';
	return 0;
}
