#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string p = "papel",r = "pedra",a = "ataque";
		string um, dois;
		cin >> um >> dois;
		if(um == p){
			if(dois == p)
				cout << "Ambos venceram\n";
			else 
				cout << "Jogador 2 venceu\n";
		}
		if(um == r){
			if(dois == p)
				cout << "Jogador 1 venceu\n";
			if(dois == r)
				cout << "Sem ganhador\n";
			if(dois == a)
				cout << "Jogador 2 venceu\n";
		}
		if(um == a){
			if(dois == p)
				cout << "Jogador 1 venceu\n";
			if(dois == r)
				cout << "Jogador 1 venceu\n";
			if(dois == a)
				cout << "Aniquilacao mutua\n";
		}
	}
	return 0;	
}
