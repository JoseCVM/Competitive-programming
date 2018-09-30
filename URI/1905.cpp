#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
void fill(int m[][7],int i, int j){
	if(m[i][j] == 1) return;
	m[i][j] = 1;
	fill(m,i+1,j);
	fill(m,i-1,j);
	fill(m,i,j+1);
	fill(m,i,j-1);
}


int main(){
	ios_base::sync_with_stdio(false);
	int m[7][7];
	for(int i = 0;i<7;i++)
		for(int j = 0;j<7;j++)
			m[i][j] = 1;
	int t;
	cin >> t;
	while(t--){
		for(int i = 1;i<6;i++)
			for(int j = 1;j<6;j++)
				cin >> m[i][j];
		fill(m,1,1);
		if(m[5][5] == 0) cout << "ROBBERS\n";
		else cout << "COPS\n";
	}

	return 0;
}

