#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;
unordered_map<ll,ll> sol;
ll solve(ll n){
    if(n == 0) return 0;
    if(sol[n] != 0) return sol[n];    
    sol[n] = max(n,solve(n/2)+solve(n/3)+solve(n/4));  
    return sol[n];
}
int main(){
    ll n;
    while(cin >> n){
       cout << solve(n) << '\n';    
    }
    return 0;
}