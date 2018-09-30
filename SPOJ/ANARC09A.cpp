#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string p;
int main(){
    int tc = 1;
    while(cin >> p){
        if(p[0] == '-') break;
        ll r = 0, nm = 0;
        for(auto& c: p){
            if(c == '{') nm++;
            else if(nm > 0) nm--;
            else{
                nm++;
                r++;
            }
        }
        r += nm/2;
        cout << tc++ << ". " << r << '\n';
    }
    return 0;
}
