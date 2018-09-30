#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll modpow(ll a, ll b){
    ll r = 1;
    a = a%10;
    while(b>0){
        if(b&1) r = (r*a)%10;
        b = b>>1;
        a = (a*a)%10;
    }
    return r;
}
int main(){
    int TC;
    cin >> TC;
    while(TC--){
        ll a, b;
        cin >> a >> b;       
        cout << modpow(a,b) << '\n';
    }
    return 0;
}
