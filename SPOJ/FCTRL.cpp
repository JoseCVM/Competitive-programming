#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	ll TC;
	cin >> TC;
	while(TC--){
		ll n;
		cin >> n;
		ll k = 5;
		ll res = 0;
		while(k <= n){
			res += n/k;
			k *= 5;
		}
		cout << res << '\n';
	}

	return 0;
}
