#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

map<string,int> m = {{" suco de laranja",120},
{" morango fresco",85},
{" mamao",85},
{" goiaba vermelha",70},
{" manga",56},
{" laranja",50},
{" brocolis",34}};
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	while(cin >> t && t){
		int r = 0;
		int n;
		string s;
		for(int i = 0;i<t;i++){			
			cin >> n;
			getline(cin,s);
			r += n*m[s];
		}
		if(r > 130){
			cout << "Menos " << r - 130 << " mg\n";
		}else if(r < 110){
			cout << "Mais " << 110 - r << " mg\n";
		}else{
			cout << r << " mg\n";
		}
	}

	return 0;
}

