#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	while(cin>>n){
		int r, t;
		int dm = 10%n;
		int um = 1%n;
		r = t = 1;
		while(r%n != 0){
			r = ((r%n) * dm)%n;
			r = ((r%n) + um)%;
			t++;
		}
		cout << t << '\n';
	}

	return 0;
}

