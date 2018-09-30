#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[110*110][110];
int f(int s, int v[],int i){    
    if(s < 0) return 0;
    if(s == 0) return 1;
    if(i < 0) return 0;
    if(dp[s][i] == - 1)
        dp[s][i] = f(s-v[i],v,i-1) || f(s,v,i-1);
    return dp[s][i] == 1;
}
int main(){
    int r, k;
    while(cin >> r >> k){
        int v[110] = {0};
        memset(dp,-1,sizeof(dp));
        set<int> s;
        for(int i = 0;i<k;i++){
            int u, x;
            cin >> u >> x;
            v[u]++;
            v[x]++;
        }
        cout << (f(k,v,r) ? 'S' : 'N') << '\n';
    }
}
