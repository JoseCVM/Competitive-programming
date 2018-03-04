#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	string a;
	cin >> n;
	cin.ignore();
	getline(cin,a);
	while(n--){
		int cnt = 0;
		map<string,int> m;
		string t;
		do{	
			getline(cin,t);
			if(t.size() == 0 || t == "\n" || cin.eof()) break;
			auto it = m.find(t);
			cnt++;
			if(it == m.end()){			
				m.insert(make_pair(t,1));
			}else{
				it->second++;
			}
		}while(!cin.eof() && t.size() > 0);
		for(auto it : m){
			cout << fixed << setprecision(4)<< it.first << ' '<< (double)(it.second*100)/cnt << '\n';
		}
		if(n > 0) cout << '\n';
	}

	return 0;
}

