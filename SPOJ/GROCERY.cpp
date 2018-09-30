#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
	ll ds = 1000000LL;
	ll ls = 2000LL;
	for(ll i = 1;i <= 125;i++)
		for(ll j = i;i*j*j*j <= ds*ls && j+j+j <= ls-i;j++)
			for(ll k = j;i*j*k*k <= ds*ls && k+k <= ls-i-j;k++){
				ll b = (i*j*k);
				ll a = (i+j+k);
				if(b <= ds || (ds*(a))%(b-ds) != 0) continue;
				ll x = (ds*(a))/(b-ds);
				if(i+j+k+x <= ls && x >= k)
					cout << fixed << setprecision(2) << i/100.0 << ' '<< j/100.0 << ' '<< k/100.0 << ' '<< x/100.0 << '\n';
			}
}
