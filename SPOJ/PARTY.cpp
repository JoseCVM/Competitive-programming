#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 1500
int c[MAX], v[MAX];
ll dp[MAX][MAX];
int n;
int main(){
    int b;
    while(cin >> b >> n && (b||n)){
        memset(dp,0,sizeof(dp));
        for(int i = 0;i<n;i++) cin >> c[i] >> v[i];
        int br;
        for(int i = 0;i<=n;i++){
            for(int j = 0;j<=b;j++){
                if(i == 0 || j == 0) dp[i][j] = 0;
                else if(c[i-1] <= j){
                    dp[i][j]= max((v[i-1] +dp[i-1][j-c[i-1]]),dp[i-1][j]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        for(int i = 0;i<= b;i++){
            if(dp[n][i] == dp[n][b]){
                br = i;
                break;
            }
        }
        cout << br << ' '<< dp[n][br] << '\n';
    }
    return 0;
}