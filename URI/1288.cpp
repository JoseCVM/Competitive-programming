#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int v[n], w[n];
		for(int i = 0;i<n;i++) cin >> v[i] >> w[i];
	//	for(int i = 0;i<n;i++) cout << v[i] << ' '<< w[i] << '\n';

		int W;
		int tgt;
		cin >> W >> tgt;
		int m[n+1][W+1];
		for(int i = 0;i<=n;i++){
			for(int j = 0;j<=W;j++){
				if(i ==0 || j == 0) m[i][j] = 0;
				else if(w[i-1] <= j) m[i][j] = max(v[i-1]+m[i-1][j-w[i-1]],m[i-1][j]);
				else m[i][j] = m[i-1][j];
			}
		}
		cout << (m[n][W] >= tgt ? "Missao completada com sucesso\n"  : "Falha na missao\n"); 
	}

	return 0;
}

