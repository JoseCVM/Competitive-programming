#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	string c;
	while(cin >> c){
		int k1 = 1, k2 = 9;
		int s1 = 0, s2 = 0;
		int b1,b2;
		for(int i = 0;i<11;i++){
			if(c[i] != '.'){
				s1 += (c[i] - '0')*k1;
				k1++;
				s2 += (c[i] - '0')*k2;
				k2--;
			} 
		}
		b1 = s1%11 == 10 ? 0 : s1%11;
		b2 = s2%11 == 10 ? 0 : s2%11;
		if(b1 == c[12] - '0' && b2 == c[13] - '0') cout << "CPF valido\n";
		else cout << "CPF invalido\n";
	}

	return 0;
}

