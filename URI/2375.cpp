#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int N;
    cin >> N;
    int a, b, c;
    cin >> a >> b >> c;
    if(N <= a && N<= b && N <= c) cout << "S\n";
    else cout << "N\n";
    return 0;
}
