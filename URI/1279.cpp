#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

bool leap(string y){
	int v = (y[y.size()-1] - '0')+ (y[y.size()-2] - '0')*10;
	int v2 = (y[y.size()-3] - '0') + (y[y.size()-4]-'0')*10;
	return (v%4==0 && (v != 0 || (v2%4 == 0 && v == 0)));
}
bool hulu(string y){
	int s = 0;
	int l = y[y.size()-1] - '0';
	for(int i = 0;i<y.size();i++)
		s+= (y[i]-'0');
	return s%3 == 0 && (l == 0 || l == 5);
}
bool bulu(string y){
	int se = 0, sd = 0;
	int last = (y[y.size()-1] - '0');
	for(int i = 0;i<y.size();i++){
		if(i%2 ==0){
			se += (y[i]-'0');
		}else{
			sd += (y[i]-'0');
		}
	}
	return ((se-sd)%11 == 0) && (last == 0 || last == 5) && leap(y);
}
int main(){
	ios_base::sync_with_stdio(false);

	string y;
	bool f = true;
	while(cin >> y){
		if(!f) cout << '\n';
		f = false;
		if(!leap(y) && !hulu(y) && !bulu(y)){
			 cout << "This is an ordinary year.\n";
		}else {
			if(leap(y))
				cout << "This is leap year.\n";
			if(hulu(y))
	 			cout << "This is huluculu festival year.\n";	
			if(bulu(y))
				cout << "This is bulukulu festival year.\n";
		}
	}
	return 0;
}

