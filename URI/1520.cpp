#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	while(cin >> n){
		int s[101] = {0};		
		for(int i = 0;i<n;i++){
			int j, k;
			cin >> j >> k;
			for(int m = j;m<=k;m++){
				s[m]++;
			}
		}
		int q;
		int ini = 0;
		cin >> q;
		if(s[q] > 0){			
			for(int i = 1;i<q;i++){
				ini += s[i];
			}
			cout << q << " found from " << ini << " to " << ini +s[q]-1 << '\n';
		}else{
			cout << q << " not found\n";
		}		
	}

	return 0;
}

