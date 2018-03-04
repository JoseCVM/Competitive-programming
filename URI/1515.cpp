#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	while(cin >> n && n){
		string s, bst;
		int a,ba, t;
		cin >> bst >> ba >> t;
		ba -= t;
		for(int i = 1;i<n;i++){
			cin.ignore();
			cin >> s >> a >> t;
			if(a-t < ba){
				bst = s;
				ba = a-t;
			}
		}
		cout << bst << '\n';		
	}
	return 0;
}

