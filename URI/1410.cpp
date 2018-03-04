#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int a, d;
	while((cin >> a >> d) && a != 0 && d != 0){
		int at[a];
		int df[d];
		for(int i = 0;i<a;i++) cin >> at[i];
		for(int i = 0;i<d;i++) cin >> df[i];
		sort(at,at+a);
		sort(df,df+d);
		bool of = false;
		for(int i = 0;i<a;i++){
			if(at[i] < df[0] || at[i] < df[1]){
				of = true;
			}
		}
		cout << (!of ? "N\n" : "Y\n");
	}

	return 0;
}

