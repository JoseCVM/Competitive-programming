#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

bool res(string b){
	int t = b.size();
	int p = 0, m = 0;
	for(int i = 0;i<t;i++){
		if(b[i] == 'P'){
			p++;
		}else if(b[i] == 'M'){
			m++;
		}
	}
	t -= m;
	return t > 0 ? (double)p/t >= 0.75 : true;
}

int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		string a[110];
		string b[110];
		cin >> n;
		cin.ignore();
		for(int i = 0;i<n;i++){
			cin >> a[i];
		}
		for(int i = 0;i<n;i++){
			cin >> b[i];
		}
		int ini = 0;
		for(int i = 0;i<n;i++){
			if(!res(b[i])){
				if(ini){
					cout << ' ';
				}else{					
					ini = 1;
				}
				cout << a[i];
			}
		}
		cout << '\n';
	}	
	return 0;
}

