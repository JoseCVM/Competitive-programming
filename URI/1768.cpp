#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	while(cin >> n){
		int nesp = n/2;
		for(int i = 0;i<(n/2) + 1;i++){
			for(int j = 0;j<nesp;j++){
				cout << ' ';
			}
			for(int j = 0;j<n-2*nesp;j++){
				cout << '*';
			}
			nesp--;
			cout<<'\n';
		}
		for(int j = 0;j<n/2;j++){
				cout << ' ';
		}
		cout << '*';
		cout << '\n';
		
		for(int j = 0;j<n/2 - 1;j++){
				cout << ' ';
		}
		cout << "***";
		cout << '\n';
		cout << '\n';
	}

	return 0;
}

