#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	while((cin >> n) && n!=0){
		int v[30] = {0};
		char p;
		int t;
		int cnt = 0;
		int prob = 0;
		string s;
		for(int i = 0;i<n;i++){
			cin.ignore();
			cin >> p >> t >> s;
			if(s == "incorrect") v[p-'A'] += 20;
			if(s == "correct"){
				 cnt += t + v[p-'A'];
				 prob++;
			}
		}
		cout << prob << ' ' << cnt << '\n';
	}

	return 0;
}

