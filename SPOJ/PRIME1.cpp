#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;

bool isprime(ll k){
	if(k <= 1) return false;
	if(k == 2 || k == 3) return true;
	if(k%2 == 0 || k % 3 == 0) return false;
	ll i = 5, j = 2;
	ll fim = sqrt(k) + 1;
	while(i <= fim){
		if(k%i == 0) return false;
		i+=j;
		j = 6 - j;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	int TC;
	cin >> TC;
	bool fs = true;
	while(TC--){
		if(!fs) cout << '\n';
		if(fs) fs = false;
		ll n, m;
		cin >> n >> m;
		for(ll i = n;i<=m;i++) if(isprime(i)) cout << i << '\n';
	}
	return 0;
}
