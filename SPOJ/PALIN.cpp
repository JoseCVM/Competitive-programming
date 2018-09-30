#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;
string s;
void pal(int i, int j){
	if(i >= j) return;
	if(s[i] != s[j]){
		if(s[i] <= s[j]){
			int aux = j-1;
			while(true){
				s[aux]++;
				if(s[aux] <= '9') break;
				s[aux] = '0';
				if(aux-1 < 0){
					s = "1"+s;
					break;
				}
				aux--;
			}
		}
		s[j] = s[i];
	}
	pal(i+1,j-1);
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	int TC;
	cin >> TC;
	while(TC--){
		cin >> s;
		int aux = s.size()-1;
		while(true){
				s[aux]++;
				if(s[aux] <= '9') break;
				s[aux] = '0';
				if(aux-1 < 0){
					s = "1"+s;
					break;
				}
				aux--;
			}
		pal(0,s.size()-1);
		cout << s << '\n';
	}

	return 0;
}
