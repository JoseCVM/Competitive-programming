#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string,pair<char,string>> a, pair<string,pair<char,string>> b){
	return (a.first < b.first || (a.first == b.first && a.second.first > b.second.first) || (a.first == b.first && a.second.first == b.second.first && a.second.second < b.second.second));
}
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	int a = 0;
	while(1){
		cin >> t;
		int i;
		if(t == 0) break;
		vector<pair<string,pair<char,string>>> v;
		string n;
		char ti;
		string d;;
		if(a == 1){
			cout << '\n';
			a = 0;
		}
		for(i = 0;i<t;i++){
			cin.ignore();
			getline(cin,n);
			//cout << n << '\n';
			cin >> d >> ti;
			//cout << d << " " << ti << '\n';
			v.push_back(make_pair(d,make_pair(ti,n)));
		}
		sort(v.begin(),v.end(),cmp);
		vector<pair<string,pair<char,string>>>::iterator it;
		for(it = v.begin();it!=v.end();it++){
			cout << (*it).first << " "<<(*it).second.first<< " "<< (*it).second.second << '\n';
		}
		a = 1;
	}
}
