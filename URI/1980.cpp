#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	ull f[16];
	f[0] = 1;
	for(int i = 1;i<16;i++){
		f[i] = f[i-1] * i;
	}
	string s;
 	while(cin >> s && s != "0"){
 		cout << f[s.size()] << '\n';
	 }
	return 0;
}

