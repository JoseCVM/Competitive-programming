#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	int n;
	string a, b;
	while(cin >> n){
		cin >> a;		
		int f[n+10];
		f[0] = -1;
		for(int i = 1;i<n;i++){
			int k = f[i-1];
			while(k>=0 && a[k+1] != a[i]) k = f[k];
			if(a[k+1]==a[i]) f[i] = k+1;
			else f[i] = -1;
		}
		int k = -1;
		cin >> b;
		for(int i = 0;i<b.size();i++){
			while(k != -1 && a[k+1] != b[i]) k = f[k];
			if(a[k+1] == b[i]) k++;
			if(k == n-1){
				cout << i-k << '\n';
				k = f[k];
			}
		}
		cout << '\n';		
	}	
	return 0;
}
