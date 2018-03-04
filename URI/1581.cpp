#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, i, flag = 1;
		cin >> n;
		string a;
		cin >> a;
		for(i = 1;i<n;i++){
			string b;
			cin >> b;
			if(a != b) flag = 0;
		}
		if(flag) cout << a << '\n';
		else cout << "ingles\n";
	}
	return 0;
}
