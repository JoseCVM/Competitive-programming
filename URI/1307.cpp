#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int t;
	int k = 1;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		cin >> s1;
		cin >> s2;
		int a1 = stoi(s1,nullptr,2);
		int a2 = stoi(s2,nullptr,2);
		if(__gcd(a1,a2) != 1){
			cout << "Pair #" << k <<": All you need is love!\n";
		}else{
			cout << "Pair #" << k <<": Love is not all you need!\n";
		}
		k++;
	}

	return 0;
}

