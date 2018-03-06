#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

int main(){
    string s;
    while(cin >> s){
        int n;
        cin >> n;
        for(int i = 0;i<n;i++){
            int k;
            cin >> k;
            cout << s[k-1];        
        }
        cout << '\n';
    }
        
    return 0;
}
