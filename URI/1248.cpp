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
		bool fail = false;
		int od[26] = {0},ob[26] = {0},ol[26] = {0};
		string d, b, l;
		vector<char> s;
		getline(cin,d);
		getline(cin,b);
		getline(cin,l);
		for(int i = 0;i<d.size();i++){
			od[d[i]- 'A'] = count(d.begin(),d.end(),d[i]);
		}
		for(int i = 0;i<b.size();i++){
			ob[b[i]- 'A'] = count(b.begin(),b.end(),b[i]);
		}
		for(int i = 0;i<l.size();i++){
			ol[l[i]- 'A'] = count(l.begin(),l.end(),l[i]);
		}
		for(int i = 0;i<26;i++){
			if(ob[i] + ol[i] > od[i]){
				fail = true;
			}else if(ob[i] + ol[i] < od[i]){
				for(int j = 0;j<(od[i]-(ob[i]+ol[i]));j++)
					s.push_back(i+'A');
			}			
		}
		if(!fail){
			sort(s.begin(),s.end());
			for(auto& i : s){
				cout << i;
			}
		}else{
			cout << "CHEATER";
		}
	
		cout << '\n';
	}

	return 0;
}

