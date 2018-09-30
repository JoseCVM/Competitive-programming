#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

string tolower(string s){
	for(int i = 0;i<s.size();i++)
		s[i] = tolower(s[i]);
	return s;
}
bool cmp(pair<string,string> a,pair<string,string> b){
	return a.first < b.first;
}
int main(){
	ios_base::sync_with_stdio(false);
	vector<pair<string,string>> sv;
	string s;
	while(getline(cin,s)){
		string sl = tolower(s);
		sv.push_back(make_pair(sl,s));
	}
	sort(sv.begin(),sv.end(),cmp);
	cout << sv[sv.size()-1].second << '\n';
	return 0;
}

