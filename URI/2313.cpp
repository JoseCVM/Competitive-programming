#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

int max(int a, int b, int c){
	return max(a,max(b,c));
}
int min(int a, int b, int c){
	return min(a,min(b,c));
}
int med(int a, int b, int c){
	return max(min(a,b),min(max(a,b),c));
}
int main(){
	ios_base::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >>c;
	if(a < b + c && b < a + c && c < a + b){
		if(a == b && b == c){
			cout << "Valido-Equilatero\n";
		}else if((a==b || b == c || c == a)){
			cout << "Valido-Isoceles\n";
		}else{
			cout << "Valido-Escaleno\n";
		}
		if(max(a,b,c)*max(a,b,c) == min(a,b,c)*min(a,b,c) + med(a,b,c)*med(a,b,c)){
			cout << "Retangulo: S\n";
		}else{
			cout << "Retangulo: N\n";
		}
	}else{
		cout << "Invalido\n";
	}
	return 0;
}

