#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, k = 0;
	cin >> t;
	while(t--){
		k++;
		string s, r;
		cin >> s >> r;
		if(s == r) cout << "Caso #" << k << ": De novo!\n";
		else if(s == "tesoura"){
			if(r == "Spock" || r == "pedra") cout << "Caso #" << k << ": Raj trapaceou!\n"; 
			else{
				cout << "Caso #" << k << ": Bazinga!\n"; 
			}
		}else if(s == "pedra"){
			if(r == "papel" || r == "Spock") cout << "Caso #" << k << ": Raj trapaceou!\n"; 
			else{
				cout << "Caso #" << k << ": Bazinga!\n"; 
			}
		}else if(s == "papel"){
			if(r == "tesoura" || r == "lagarto") cout << "Caso #" << k << ": Raj trapaceou!\n"; 
			else{
				cout << "Caso #" << k << ": Bazinga!\n"; 
			}
		}else if(s == "lagarto"){
			if(r == "tesoura" || r == "pedra") cout << "Caso #" << k << ": Raj trapaceou!\n"; 
			else{
				cout << "Caso #" << k << ": Bazinga!\n"; 
			}
		}else if(s == "Spock"){
			if(r == "papel" || r == "lagarto") cout << "Caso #" << k << ": Raj trapaceou!\n"; 
			else{
				cout << "Caso #" << k << ": Bazinga!\n"; 
			}
		}
	}
	return 0;
}
