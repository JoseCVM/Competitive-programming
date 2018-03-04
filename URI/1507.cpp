#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

bool subsq(string a, string b){
	int i, j;
	int m = a.size(), n = b.size();
	
	for(i = 0, j = 0;i<n && j < m;i++)
		if(a[j] == b[i]) j++;
	
	return j == m;
}

int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		string w;
		cin >> w;
		int q;
		cin >> q;
		cin.ignore();
		while(q--){
			string qe;
			cin >> qe;
			if(subsq(qe,w)){
				cout << "Yes\n";
			}else{
				cout << "No\n";
			}
		}		
	}

	return 0;
}

