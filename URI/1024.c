#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		for(i = 0;i < a.size();i++){
			if(a[i] >= 'A' && a[i] <= 'z') a[i]+=3;
		}
		reverse(a.begin(),a.end());
		for(i = a.size()/2;i<a.size();i++){
			a[i]--;
		}
		cout << a << '\n';
		
	}
	
	return 0;
	
}
