#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int p1,c1,p2,c2;
    cin >> p1 >> c1 >> p2 >> c2;
    if(p1*c1 == p2*c2) cout << "0\n";
    else if(p1*c1 < p2*c2) cout <<"1\n";
    else cout <<"-1\n";
    return 0;
}
