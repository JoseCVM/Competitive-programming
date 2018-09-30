#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;
#define MAX 110

int main(){
	ios_base::sync_with_stdio(false);
	int n;
	while(cin >> n){
		ll arr[MAX];
		unordered_map<ll,ll> lhs, rhs;
		for(int i = 0;i<n;i++) cin >> arr[i];
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				for(int k = 0;k<n;k++){
					if(arr[k] == 0) continue;
					rhs[arr[k]*(arr[j] + arr[i])]++;
				}
			}
		}
		ll res = 0;
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				for(int k = 0;k<n;k++){
					res += rhs[arr[i]*arr[j] + arr[k]];
				}
			}
		}
		cout << res << '\n';
	}

	return 0;
}
