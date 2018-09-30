#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int TC = 1;
    int n;
    while(cin >> n && n != -1){
        cout << "Experiment " << TC << ": "<<n/2<<" full cycle(s)\n";
        TC++;
    }
    return 0;
}
