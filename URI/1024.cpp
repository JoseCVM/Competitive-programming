#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, i;
	cin >> t;
	scanf("%*c");
	while(t--){
		string a;
		getline(cin, a);
		for(i = 0;i < a.size();i++){
			if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')){			
				a[i]+=3;
			}
		}
		reverse(a.begin(),a.end());
		for(i = a.size()/2;i<a.size();i++){
			a[i]--;
		}
		cout << a << '\n';
		
	}
	
	return 0;
	
}
