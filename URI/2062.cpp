#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cin.ignore();
	while(n--){
		string s;
		cin >> s;
		if(s.size() == 3){
			if(s[0] == 'U' && s[1] == 'R'){
				cout << "URI";
			}else if(s[0] == 'O' && s[1] == 'B'){
				cout << "OBI";
			}else{
				cout << s;
			}
		}else{
			cout << s;
		}
		if(n > 0) cout << ' ';
	}	
	cout << '\n';
	return 0;
}

