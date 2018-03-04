#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	while(cin >> n && n){
		int rd = 0;
		for(int i = 0; i<n;i++){
			int t, q;
			cin >> t >> q;
			rd += q/2;
		}
		cout << rd/2 << '\n';
	}

	return 0;
}

