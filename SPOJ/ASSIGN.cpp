#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int m[30][30];
ll dp[1<<21];
int ok[100], n;
ll f(ll mask){
    int k = __builtin_popcount(mask);
    if(k == n) return 1;
    if(dp[mask] != -1) return dp[mask];
    ll res = 0;
    for(int i = 0;i<n;i++)
         if(((mask >> i) & 1) == 0 && m[k][i]) res += f(mask | (1 << i));    
    return dp[mask] = res;
}
int main(){
    int TC;
    cin >> TC;
    while(TC--){
        cin >> n;
        for(int i = 0;i<n;i++)
            for(int j = 0;j<n;j++) cin >> m[i][j];
        memset(dp,-1,sizeof(dp));
        cout << f(0) << '\n';    
    }
    return 0;
}