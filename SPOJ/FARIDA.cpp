#include <bits/stdc++.h>
using namespace std;
#define MAX 10010
typedef long long int ll;
int n;
int v[MAX];
ll dp[MAX];
ll f(int i){
    if(i >= n) return 0;
    if(dp[i] == 0) dp[i] = max(v[i] + f(i+2),f(i+1));
    return dp[i];
}

int main(){
    int TC, AT = 1;
    cin >> TC;
    while(TC--){
        cout << "Case " << AT << ": ";
        AT++;
        cin >> n;
        memset(dp,0,sizeof(dp));
        for(int i = 0;i<n;i++) cin >> v[i];
        cout << f(0) << '\n';
    }
    return 0;
}