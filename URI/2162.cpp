#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int r = 1;
	int n, at, ant;
	bool vale = false;
	cin >> n;
	cin >> ant >> at;
	if(at != ant){
		if(at < ant) vale = true;
		ant = at;		
		for(int i = 2;i<n;i++){
			cin >> at;
			if(vale && at < ant){
				r = 0;
				break;
			}
			if(!vale && at > ant){
				r = 0;
				break;
			}
			if(at == ant){
				r = 0;
				break;
			}
			vale = !vale;
			ant = at;
		}
	}else{
		r = 0;
	}

	cout << r << "\n";
	return 0;
}

