#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string p1, c1, p2, c2;
		cin >> p1 >> c1 >> p2 >> c2;
		long long int j1, j2;
		cin >> j1 >> j2;
		if((j1+j2)%2==0){
			if(c1=="PAR") cout << p1 << '\n';
			else cout << p2 << '\n';
		}else{
			if(c1=="IMPAR") cout << p1 << '\n';
			else cout << p2 << '\n';
		}
	}
	return 0;
}
