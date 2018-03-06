#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

int main(){
    string s[11] = {"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << s[a+b] << '\n';        
    }
    return 0;
}
