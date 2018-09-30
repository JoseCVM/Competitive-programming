#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string s;
#define MAX 6120
ll dp[MAX][MAX];
ll f(){
   ll res = 1;
   int l, h, t = s.size();
   for(int i = 1;i<t;i++){
        l = i-1;
        h = i;
        while(l >= 0 && h < t && s[l] == s[h]){
             res = max(res,(ll)h-l+1);
             l--;
             h++;
        }
        l = i-1;
        h = i+1;    
        while(l >= 0 && h < t && s[l] == s[h]){
             res = max(res,(ll)h-l+1);
             l--;
             h++;
        }
   }
   return t - res;
}
ll f2(int i, int j){
    if(dp[i][j] == 0){
        if(i == j) dp[i][j] = 1;
        else if(s[i] != s[j]) dp[i][j] = max(f2(i + 1, j),f2(i, j - 1));    
        else if (j == i + 1) dp[i][j] = 2;
        else dp[i][j] = f2(i + 1, j - 1) + 2;
    }
    return dp[i][j];
}
int main(){
    int TC;
    cin >> TC;
    while(TC--){ 
        cin >> s; 
        for(int i = 0;i<s.size()+1;i++)
            for(int j = 0;j<s.size()+1;j++)
                dp[i][j] = 0;  
        cout << s.size() - f2(0,s.size()) << '\n';
    }
    return 0;
}