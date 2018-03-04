#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	ull v[42];
	v[0] = 1;
	v[1] = 1;
	for(int i = 2;i<42;i++){
		v[i] = v[i-1]+v[i-2];
	}
	int n;
	while(cin >> n && n){
		cout << v[n] << '\n';
	}
	return 0;
}

