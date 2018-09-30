#include <bits/stdc++.h>
using namespace std;
#define MAX 2010
int v[MAX];
typedef long long int ll;
ll dp[MAX][MAX];
ll f(int i, int j, int a){
    if(dp[i][j] == 0){
        if(i == j) dp[i][j] = v[i]*a;
        else dp[i][j] = max(v[i]*a + f(i+1,j,a+1),v[j]*a + f(i,j-1,a+1));
    }
    return dp[i][j];
}
int main(){
    int n;
    cin >> n;
    memset(dp,0,sizeof(dp));
    for(int i = 0;i<n;i++) cin >> v[i];
    cout << f(0,n-1,1) << '\n';
    return 0;
}