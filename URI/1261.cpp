#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int m, n;
	cin >> m >> n;
	map<string,int> hay;
	while(m--){
		string s;
		int d;
		cin.ignore();
		cin >> s >> d;
		hay.insert(make_pair(s,d));
	}
	while(n--){
		int sal = 0;
		while(true){
			string a;
			cin >> a;
			if(a == ".") break;	
			auto r = hay.find(a);
			sal += r == hay.end() ? 0 : r->second;
		}	
		cout << sal << '\n';
	}

	return 0;
}

