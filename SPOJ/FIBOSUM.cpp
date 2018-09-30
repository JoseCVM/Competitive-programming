#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef long long int ll;
#define MAX 10000010
#define MOD 1000000007


ll a,b,c,d;
void nth(ll n, ll ans[]){
    if(n == 0){
        ans[0] = 0;
        ans[1] = 1;
        return;
    }
    nth(n/2,ans);
    a = ans[0];
    b = ans[1];
    c = 2*b - a;
    if(c < 0) c+= MOD;
    c = (a * c) % MOD;  
    d = (a*a + b*b) % MOD;  
    if(n%2 == 0){
        ans[0] = c;
        ans[1] = d;
    }else{
        ans[0] = d;
        ans[1] = c+d;
    }
}
int main(){
    int TC;
    cin >> TC;
    while(TC--){
        ll ans[2] = {0};
        ll n, m;
        cin >> n >> m;
        nth(n+1,ans);
        n = ans[0];
        ans[0] = ans[1] = 0;
        nth(m+2,ans);
        m = ans[0];
        ll res = (m-1-(n-1))%MOD;
        if(res < 0) res += MOD;
        cout << res << '\n';    
    }
    return 0;
}