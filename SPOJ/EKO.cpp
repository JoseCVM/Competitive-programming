#include <bits/stdc++.h>
using namespace std;
#define MAX 1000010
typedef long long int ll;
ll v[MAX], m, n;
ll f(ll t){
    ll r = 0;
    for(ll i = 0;i<n;i++) if(t <= v[i]) r += v[i] - t;
    return r;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(ll i = 0;i<n;i++) cin >> v[i];
    ll lo = 0, hi = 1000000000,mi,resp;
    while(lo <= hi){
        mi = (lo+hi)/2;
        ll res = f(mi);
        if(res >= m){
            resp = mi;
            lo = mi+1;
        }else{
            hi = mi-1;
        }
    }
    cout << resp << '\n';
    return 0;
}