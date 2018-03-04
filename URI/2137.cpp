#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	//ios_base::sync_with_stdio(false);
	int n;
	while(scanf("%d",&n) != EOF){
		cin.ignore();
		string b[n];
		for(int i = 0;i<n;i++){
			cin >> b[i];
		}
		sort(b,b+n);
		for(int i = 0;i<n;i++){
			cout << b[i] << '\n';
		}
	}

	return 0;
}

