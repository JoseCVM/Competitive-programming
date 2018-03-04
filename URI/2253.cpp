#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	bool up, lo, num, inv, esp;

	string s;
	while(getline(cin,s)){
		up = lo = num = false;
		inv = false;
		for(int i = 0;i< s.size();i++){
			if(s[i] >= '0'&& s[i] <= '9') num = true;
			else if(s[i] >= 'a' && s[i] <= 'z') lo = true;
			else if(s[i] >= 'A' && s[i] <= 'Z') up = true;
			else inv = true;
		}
		if(num && lo && up && !inv && s.size() <= 32 && s.size() >= 6) cout <<"Senha valida.\n";
		else cout << "Senha invalida.\n";
	}

	return 0;
}

