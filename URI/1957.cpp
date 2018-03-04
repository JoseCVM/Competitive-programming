#include<bits/stdc++.h>
using namespace std;

int main(){
	stringstream a;
	int b;
	cin >> b;
	a  << hex << b;
	string s(a.str());
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout << s << '\n';
	return 0;
}
