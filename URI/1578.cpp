#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for(int i = 0;i<t;i++){
		cout << "Quadrado da matriz #" << i+4 << ":\n";
		int n;
		
		cin >> n;
		ull v[n][n];
		ull val;
		ull mai[n] = {0};
		int esp[n];
		for(int j = 0;j<n;j++){
			for(int k = 0;k<n;k++){
				cin >> val;
				v[j][k] = val*val;
				mai[k] = max(mai[k],v[j][k]);
			}
		}
		for(int j = 0;j<n;j++){
			char ep[110];
			sprintf(ep,"%llu",mai[j]);
			esp[j] = strlen(ep);
		}
		for(int j = 0;j<n;j++){
		//	cout <<"ESPJ: " << esp[j] << '\n';
			for(int k = 0;k<n;k++){
				cout << setw(esp[k]) << v[j][k];
				if(k < n-1) cout << ' ';
			}
			cout<< '\n';
		}
		if(i < t-1)
			cout << '\n';
	}

	return 0;
}

