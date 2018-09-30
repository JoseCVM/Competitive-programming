#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	ll n;
	cin >> n;
	ll r = 0, i = 0;
	for(int i = 1;i<=n;i++){
		ll a = n/i;
		if(a<(i-1)) break;
		r+= n/i - (i-1);
	}
	cout << r << '\n';
	return 0;
}
