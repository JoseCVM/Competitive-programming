#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d%*c",&t);
	while(t--){
		string a;
		getline(cin,a);
		string l, r;
		l = a.substr(0,a.length()/2);
		r = a.substr(a.length()/2);
		reverse(r.begin(),r.end());
		reverse(l.begin(),l.end());
		string n = l + r;
		cout << n << '\n';
	}
	return 0;	
}
