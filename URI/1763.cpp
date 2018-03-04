#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	map<string,string> v = {{"brasil","Feliz Natal!"},
{"alemanha","Frohliche Weihnachten!"},
{"austria","Frohe Weihnacht!"},
{"coreia","Chuk Sung Tan!"},
{"espanha","Feliz Navidad!"},
{"grecia","Kala Christougena!"},
{"estados-unidos","Merry Christmas!"},
{"inglaterra","Merry Christmas!"},
{"australia","Merry Christmas!"},
{"portugal","Feliz Natal!"},
{"suecia","God Jul!"},
{"turquia","Mutlu Noeller"},
{"argentina","Feliz Navidad!"},
{"chile","Feliz Navidad!"},
{"mexico","Feliz Navidad!"},
{"antardida","Merry Christmas!"},
{"canada","Merry Christmas!"},
{"irlanda","Nollaig Shona Dhuit!"},
{"belgica","Zalig Kerstfeest!"},
{"italia","Buon Natale!"},
{"libia","Buon Natale!"},
{"siria","Milad Mubarak!"},
{"marrocos","Milad Mubarak!"},
{"japao","Merii Kurisumasu!"}};
	string q;
	while(cin >> q){
		auto it = v.find(q);
		if(it == v.end()){
			cout << "--- NOT FOUND ---\n";
		}else{
			cout << it->second << '\n';
		}
	}
	return 0;
}

