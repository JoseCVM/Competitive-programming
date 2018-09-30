#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;


int sd(ull a){
	int r = 0;
	while(a){
		r += a%10;
		a /= 10;
	}
	return r;
}
int main(){
	ios_base::sync_with_stdio(false);
	ull m, n;
	while(cin >> n >> m){		
		cout << sd(m) << " "<<(m%3 == 0 ? "sim\n" : "nao\n");
	}

	return 0;
}

