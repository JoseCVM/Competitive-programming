#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	while(n--){
		string a, b;
		cin >> a >> b;
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		string c = to_string(atoi(a.c_str())+atoi(b.c_str()));
		reverse(c.begin(),c.end());
		cout << atoi(c.c_str()) << '\n';
	}

	return 0;
}
