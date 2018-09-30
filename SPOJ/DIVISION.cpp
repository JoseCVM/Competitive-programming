#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define INV 333333336 
typedef long long int ll;
ll pw(ll n){
    ll x=1,p=2;
    while(n>0){
        if(n&1) x=(x*p)%MOD;
        p=(p*p)%MOD;
        n>>=1;
    }
    return x;
}
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    ll n,result;
    while(cin >> n){
        if(n&1)
            cout << ((pw(n)+1)*INV)%MOD;        
        else
            cout << ((pw(n)+2)*INV)%MOD;
        cout << '\n';
    }
    return 0;
}