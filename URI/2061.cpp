#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, a;
	cin >> t >> a;
	int i;
	for(i = 0;i<a;i++){
		string s;
		cin >> s;
		if(s == "fechou" && t>0) t+=1;
		else if(s == "clicou" && t>0) t-=1;		
	}
	cout << t << '\n';
	return 0;
}
