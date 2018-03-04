#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, k = 0;
	cin >> t;
	while(t--){
		k++;
		string s, r;
		cin >> s >> r;
		if(s == r) cout << "empate\n";
		else if(s == "tesoura"){
			if(r == "spock" || r == "pedra") cout << "sheldon\n"; 
			else{
				cout << "rajesh\n"; 
			}
		}else if(s == "pedra"){
			if(r == "papel" || r == "spock") cout << "sheldon\n"; 
			else{
				cout << "rajesh\n"; 
			}
		}else if(s == "papel"){
			if(r == "tesoura" || r == "lagarto") cout << "sheldon\n"; 
			else{
				cout << "rajesh\n"; 
			}
		}else if(s == "lagarto"){
			if(r == "tesoura" || r == "pedra") cout << "sheldon\n"; 
			else{
				cout << "rajesh\n"; 
			}
		}else if(s == "spock"){
			if(r == "papel" || r == "lagarto") cout << "sheldon\n"; 
			else{
				cout << "rajesh\n"; 
			}
		}
	}
	return 0;
}
