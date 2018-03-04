#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	string s;
	while((cin >> s >> n)){
		cin.ignore();
	//	cout << s << '\n' << n << '\n';
		int cnt = 0;
		int t = s.size();
		int sim = 0;
		bool in = false;
		for(int i = 0;i<t;i++){
			cnt++;
		//	if(s[i] == 'W') cout << 'W';
			while(i < t && s[i] == 'R' && sim < n){
			//	cout << s[i];
				i++;
				sim++;
				in = true;
			}
			if(in){
				in = !in;
				i--;
			}
		//	cout << '\n';
			sim = 0;
		}
		cout << cnt << '\n';
	}

	return 0;
}

