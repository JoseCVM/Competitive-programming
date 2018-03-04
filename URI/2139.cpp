#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int d, m;
	int dias[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
	while(cin >> m >> d){
		if(m == 12 && d > 25){
			cout << "Ja passou!\n";
		}else{	
			m--;
			int r = 0;		
			for(int i = m;i<12;i++){
				r+=dias[i];
			}
		//	cout << r << "  \n  ";
			r-= d;
			if(r == 0){
				cout <<"E natal!\n";
			}else if(r == 1){
				cout <<"E vespera de natal!\n";
			}else{
				cout <<"Faltam " << r << " dias para o natal!\n";
			}
		}
	}

	return 0;
}

