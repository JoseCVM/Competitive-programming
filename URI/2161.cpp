#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	double res = 0;
	int n;
	cin >> n;
	while(n--){
		res +=6;
		res = 1.0/res;
	}
	cout << setprecision(10) << fixed << res+3.0 << '\n';
	return 0;
}

