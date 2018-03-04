#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	while(n--){
		cin.ignore();
		string s;
		double dif, sc[7];
		cin >> s;
		cin >> dif;
		for(int i = 0;i<7;i++){
			cin >> sc[i];
		}
		sort(sc,sc+7);
		double sum = 0;
		for(int i = 1;i<6;i++) sum+=sc[i];
		cout << setprecision(2) << fixed << s << ' ' << sum*dif << '\n';
	}

	return 0;
}

