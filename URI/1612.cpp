#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	while(n--){
		int r;
		cin >> r;
		cout << (int)ceil((double)r/2) << '\n';
	}

	return 0;
}

