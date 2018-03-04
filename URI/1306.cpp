#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

	

int main(){
	ios_base::sync_with_stdio(false);
	int r, n;
	int j = 0;
	while(cin >> r >> n && r && n){
		j++;
		cout <<"Case " << j<<':';
		if(n * 27 >= r){
			if(r != n)
				cout <<' ' << r/n - (r%n == 0? 1 : 0) << '\n';
			else
				cout << " 0\n";
		}else{
			cout << " impossible\n";
		}
	}

	return 0;
}

