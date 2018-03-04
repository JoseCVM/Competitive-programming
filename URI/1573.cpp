#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int a, b, c;
	while(cin >> a >> b >> c && a && b && c){
		double v = cbrt(a*b*c);
		int k = v;
		cout << k << '\n';
	}

	return 0;
}

