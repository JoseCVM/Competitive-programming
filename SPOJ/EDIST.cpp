#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string a, b;
#define MAX 2020
ll dp[MAX][MAX];
ll f(int i, int j){
   if(i == 0) return j;
   if(j == 0) return i;
   if(dp[i][j] == 0){
       if(a[i-1] == b[j-1]) dp[i][j] = f(i-1,j-1);
       else dp[i][j] = 1 + min(f(i,j-1),min(f(i-1,j),f(i-1,j-1)));
   }
   return dp[i][j];
}
int main(){
    int TC;
    cin >> TC;
    while(TC--){
        for(int i = 0;i<MAX;i++)
           for(int j = 0;j<MAX;j++) 
                dp[i][j] = 0;
        cin >> a >> b;
        ll res = f(a.size(),b.size());
        cout << res << '\n';
    }
    return 0;
}