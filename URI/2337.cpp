#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
ll gcd(ll a, ll b){
    ll t;
    while(b){
        t = b;
        b = a%b;
        a = t;
    }
    return t;
}
int main(){
    ll fib[45];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2;i<45;i++) fib[i] = fib[i-1]+fib[i-2];
    ll n;
    while(cin >> n){
        ll tot = 1LL << n;
        ll fav = fib[n+2];
        ll divi = gcd(fav,tot);
        fav = fav/divi;
        tot = tot/divi;
        cout << fav << "/" << tot << "\n";
    }

    return 0;
}
