#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	string s;
	while(cin >> s){
		list<char> ls;
		list<char>::iterator it = ls.begin();
		for(int i = 0;i<s.size();i++){
			if(s[i] == '[') it = ls.begin();
			else if(s[i] == ']') it = ls.end();
			else {
				ls.insert(it,s[i]);
			}
		}
		for(auto& it : ls){
			cout << it;
		}
		cout << '\n';
	}

	return 0;
}

