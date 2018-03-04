#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	while(cin >> n){
		int d = 0;
		int v[n] = {0};
		for(int i = 0;i<n;i++){
			int k;
			cin >> k;
			d += k;
			v[i] = d;		
		}
		int res= 0;
		if(d%3 == 0){
			d /= 3;
			for(int i = 0;i<n;i++){
				if(binary_search(v,v+n,v[i]+d) && binary_search(v,v+n,v[i]+2*d)) res++;
			}
		}
		cout << res << '\n';
	}

	return 0;
}

