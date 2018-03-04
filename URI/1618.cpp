#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	while(n--){
		int a1,a2,b1,b2,c1,c2,d1,d2,x,y;
		cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >> d1 >> d2 >> x >> y;
		if(x >= a1 && x <= b1 && y >= a2 && y <= c2) cout << 1 << '\n';
		else cout << 0 << '\n';
	}
	return 0;
}

