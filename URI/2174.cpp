#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int t;
	set<string> st;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		st.insert(s);
	}
	cout << "Falta(m) " << 151 - st.size() << " pomekon(s).\n";
	return 0;
}

