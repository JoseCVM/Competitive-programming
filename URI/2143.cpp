#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int t;
	int n;
	while(cin >> n && n){
		while(n--){
			int k;
			cin >> k;
			if(k%2 == 0) cout << 2*(k-2) + 2 << '\n';
			else cout << 2*(k-1) + 1 << '\n';
		}

	}
	
	return 0;
}

