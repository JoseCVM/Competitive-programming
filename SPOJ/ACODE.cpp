#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;
#define MAX 5050
ll dp[MAX];
string s;
ll f(int i){
	if(i > s.size()) return 1;
	if(dp[i] != 0) return dp[i];
	if(s[i] == '0') return 0;
	if(i+1 < s.size() && (s[i] == '1' || (s[i] == '2' && s[i+1] <= '6'))) {
		if(s[i+1] == '0')
			dp[i] = f(i+2);
		else
			dp[i] = f(i+1) + f(i+2);
	}
	else dp[i] = f(i+1);
	return  dp[i];
}

int main(){
	ios_base::sync_with_stdio(false);
	while(cin >> s && s != "0"){
		memset(dp,0,sizeof(dp));
		cout << f(0) << '\n';
	}

	return 0;
}
