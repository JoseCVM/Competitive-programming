#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	double n, c;
	while(cin >> n >> c){
		if(n - (int)n >= c){
			cout << (int)n + 1 << '\n';
		}else{
			cout << (int)n << '\n';
		}
	}

	return 0;
}

