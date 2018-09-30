#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int n;
    ull phil[18];
    phil[0] = 0;
    phil[1] = 1;
    for(int i = 2;i<18;i++){
        if(i&1) phil[i] = phil[i-1]*phil[i-2];
        else phil[i] = phil[i-1] + phil[i-2];
    }
    while(cin >> n){
        cout << phil[n-1] << '\n';
    }
    return 0;
}
