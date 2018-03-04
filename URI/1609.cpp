#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		set<int> s;
		int i, n;
		cin >> n;
		for(i = 0;i<n;i++){
			int v;
			cin >> v;
			s.insert(v);
		}
		cout << s.size() << '\n';
	}
	return 0;
}
