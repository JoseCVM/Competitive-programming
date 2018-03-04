#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		map<string,double> m;
		int p;
		cin >> p;
		while(p--){
			string f;
			double v;
			cin >> f >> v;
			m.insert(pair<string,double>(f,v));
		}
		cin >> p;
		double sum = 0;
		while(p--){
			int un;
			string f;
			cin >> f >> un;
			sum += m.find(f)->second * un;
		}
		cout <<  fixed << setprecision(2) <<"R$ " << sum << '\n';
	}
	return 0;
}
