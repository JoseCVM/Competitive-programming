#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;


pair<int,int> del[8] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}}; 
int main(){
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	int p[n][m];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin >> p[i][j];
		}
	}
	int x=-1, y=-1, end = false;
	for(int i = 1;i<n-1;i++){
		for(int j = 1;j<m-1;j++){
			if(p[i][j] == 42){
				bool fnd = true;
				for(int k = 0;k<8;k++){
					int l, c;
					l = i+del[k].first;
					c = j+del[k].second;
					if(p[l][c] != 7){
						fnd = false;
					}
				}
				if(fnd){
					x = i;
					y = j;
					end = true;
					break;
				}
			}
		}
		if(end) break;
	}
	cout << x+1 << " " << y+1 << "\n";
	return 0;
}

