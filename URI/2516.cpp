#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int s,a,b;
    while(cin >> s >> a >> b){
        if(a-b <= 0) cout << "impossivel\n";
        else cout << fixed << setprecision(2) << (double)s/(a-b) << '\n';
    }
    return 0;
}
