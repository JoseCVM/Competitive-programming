#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int a, c;
	while((cin >> a >> c) && a != 0 && c != 0){
		int ant = a;
		int res = 0;
		for(int i = 0;i<c;i++){
			int at;
			cin >> at;
			if(at < ant){
				res += ant-at;
			}
			ant = at;
		}
		cout <<res << "\n";
	}

	return 0;
}

