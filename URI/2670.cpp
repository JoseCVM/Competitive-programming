#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int min(int a, int b, int c){
    return min(a,min(b,c));
}
int main(){
    int p,s,t;
    int a1, a2, a3;
    cin >> p >> s >> t;
    a1 = s*2 + t*4;
    a2 = 2*p + 2*t;
    a3 = p*4 + s*2;
    cout << min(a1,a2,a3) << '\n';
    return 0;
}
