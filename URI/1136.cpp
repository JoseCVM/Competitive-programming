#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n, b;
	while((cin>> n >> b) && n != 0 && b != 0){
		int v[b];
		for(int i = 0;i<b;i++) cin >> v[i];
		bool p = true;
		bool res[n+1] = {false};
		
		for(int j = 0;j<b;j++){
			for(int k = 0;k<b;k++){
				int m = abs(v[k] - v[j]);
				res[m] = true;
			}
		}
		for(int i = 0;i<=n;i++){
			if(res[i] == false){
				p = false;
				break;
			}
		}
		cout << (p ? "Y\n" : "N\n");
	}
	return 0;
}

