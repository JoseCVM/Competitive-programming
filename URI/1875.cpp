#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

int pts(char a, char b){
	if((a == 'G'&& b == 'R') || (a == 'R' && b == 'B') || (a == 'B' && b == 'G')) return 1;
	else return 2;
}

int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int pt[3] = {0,0,0};
		for(int i = 0;i<n;i++){
			char a, b;
			cin >> a >> b;
		//	cout << a << " " << b << " = " << pts(a,b) << '\n';
			if(a == 'G') pt[0] += pts(a,b);
			else if(a == 'B') pt[1] += pts(a,b);
			else pt[2] += pts(a,b);			
		}
		if(pt[0] > pt[1] && pt[0] > pt[2]){
			cout << "green\n";
		}else if(pt[1] > pt[0] && pt[1] >pt[2]){			
			cout << "blue\n";
		}else if(pt[2] > pt[0] && pt[2] >pt[1]){
			cout << "red\n";			
		}else if((pt[1] == pt[2] && pt[1] != pt[0]) || (pt[0] == pt[2] && pt[1] != pt[0]) ||  (pt[0] == pt[1] && pt[1] != pt[2])){
			cout << "empate\n";			
		}else{
			cout << "trempate\n";			
		}
	}

	return 0;
}

