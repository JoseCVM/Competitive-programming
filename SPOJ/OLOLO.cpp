#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n, r = 0;
    scanf("%lld",&n);
    while(n--){
        ll k;
        scanf("%lld",&k);
        r ^= k;
    }
    cout << r << '\n';
    return 0;
}