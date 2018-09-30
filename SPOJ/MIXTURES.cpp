#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;
#define MAX 1000
ll v[MAX];
ll dp[MAX][MAX];
ll s(int i, int j){
	ll res = 0;
	for(int k = i;k<=j;k++){
		res += v[k];
		res %= 100;
	}
	return res;
}
ll f(int i, int j){
	if(i >= j) return 0;
	if(dp[i][j] == -1){
		dp[i][j] = INT_MAX;
		for(int k = i;k<j;k++){
			dp[i][j] = min(dp[i][j],f(i,k)+f(k+1,j)+s(i,k)*s(k+1,j));
		}
	}
    return dp[i][j];
}
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	while(cin >> n){
		for(int i = 0;i<n;i++) cin >> v[i];
		memset(dp,-1,sizeof(dp));
		cout << f(0,n-1) << '\n';
	}

	return 0;
}
