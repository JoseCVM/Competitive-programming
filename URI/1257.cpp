#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int nl;
		cin >> nl;
		unsigned long long int sum = 0;
		int k = 0;
		while(nl--){
			string s;
			cin >> s;
			int tam = s.size();
			int i;
			for(i = 0;i<tam;i++){
			//	cout <<(int) s[i] - 'A' << '\n';
				sum += (s[i] - 'A') + i + k;
			}
			k++;
		}
		cout << sum << '\n';
	}
	return 0;
}
