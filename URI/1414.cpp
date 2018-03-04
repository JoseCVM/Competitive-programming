#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int t, n;
	while((cin >> t >> n) && t){
		int r = 0;
		string s;
		for(int i = 0;i<t;i++){
			int a;
			cin.ignore();
			cin >> s >> a;
			r+= a;
		}
	
		cout << (3*n) - r << '\n';
	}
	
	return 0;
}

