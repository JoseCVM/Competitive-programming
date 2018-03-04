#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n, m;
	while(cin >> n >> m){
		int r = 0;
		for(int i = 0;i<n;i++){
			r++;
			bool z = false;
			for(int j = 0;j<m;j++){
				int k;
				cin >> k;
				if(k == 0) z = true;
			}
			if(z) r--;
		}
		cout << r << '\n';
	}
	
	return 0;
}

