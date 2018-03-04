#include<bits/stdc++.h>
using namespace std;
int main(){
	int t= 0;
	string s;
	int soma = 0;
	while(t<3){	
		getline(cin, s);
		//cout << s << '\n';
		if(s == "caw caw"){
			cout << soma <<'\n';
			soma = 0;
			t++;
		}else{
			int n = 0;
			if(s[0] == '*') n+=4;
			if(s[1] == '*') n+=2;
			if(s[2] == '*') n+=1;
			soma += n;		
		}
	}
	return 0;
}
