#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int TC;
    cin >> TC;
    while(TC--){
        ll n, m;
        cin >> n >> m;
        cout << n/m + (n%m == 0 ? 0 : 1) << '\n';
    }
}
