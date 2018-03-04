#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m, c, i, j;
		cin >> m >> c;
		vector<int> q[m];
		for(i = 0;i<c;i++){
			int val;
			cin >> val;
			q[val%m].push_back(val);
		}		
		for(i = 0;i<m;i++){
			cout << i << " -> ";
			for(j = 0;j<q[i].size();j++){
				cout << q[i][j] << " -> ";
			}
			cout << "\\\n";
		}	
		if(t > 0)
		cout <<'\n';	
	}
	return 0;
}
