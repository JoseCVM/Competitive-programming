#include <bits/stdc++.h>
using namespace std;
int max(int a, int b, int c){
    return max(a,max(b,c));
}
int max(int a, int b, int c, int d){
    return max(a,b,max(c,d));
}

int mat[110][110];
int dp[110][110];
int h, w;
int f(int j, int i){
    if(j == h) return 0;
    if(dp[j][i] == -1){
        if(i == 0)
            dp[j][i] = max(dp[j][i] ,mat[j][i]+f(j+1,i+1),mat[j][i]+f(j+1,i));
        else if(i == w-1)
            dp[j][i] = max(dp[j][i] ,mat[j][i]+f(j+1,i-1),mat[j][i]+f(j+1,i));
        else
            dp[j][i] = max(dp[j][i] ,mat[j][i]+f(j+1,i+1),mat[j][i]+f(j+1,i),mat[j][i]+f(j+1,i-1));  
    }
    return dp[j][i];
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        cin >> h >> w;
        for(int i = 0;i<h;i++)
            for(int j = 0;j<w;j++){
                cin >> mat[i][j];
                dp[i][j] = -1;
            }
        int res = -1;
        for(int i = 0;i<w;i++){
            if(i == 0)
                res = max(res,mat[0][i]+f(1,i+1),mat[0][i]+f(1,i));
            else if(i == w-1)
                res = max(res,mat[0][i]+f(1,i-1),mat[0][i]+f(1,i));
            else
                res = max(res,mat[0][i]+f(1,i+1),mat[0][i]+f(1,i),mat[0][i]+f(1,i-1));
        }
        cout << res << '\n';
    }

    return 0;
}