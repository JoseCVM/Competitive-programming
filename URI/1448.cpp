#include <bits/stdc++.h>
using namespace std;
int score(string a, string b, string c){
    int t = a.size();
    int sa = 0, sb = 0, prio = 0;
    bool ca = true, cb = true;
    int ret = 0;
    for(int i = 0;i<t;i++){
        if(a[i] == c[i]){
            sa++;
            ca = true;
        }else{
            ca = false;
        }  
        if(b[i] == c[i]){
            sb++;
            cb = true;
        }else{
            cb = false;
        }
        if(prio == 0 && ca != cb){
          // cout << "DIFERIU NO " << i << " ESIMO\n";
           if(ca) prio = 1;
           else prio = 2;
        }
    }
    return sa == sb ? prio : (sa > sb ? 1 : 2);
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    for(int i = 1;i<=t;i++){

        cout << "Instancia " << i << '\n';
        string a, b, c;
        getline(cin,a);
        getline(cin,b);
        getline(cin,c);
        //cout << a << '\n' << b << '\n' << c << '\n';        
        int res = score(b,c,a);
        if(res == 1) cout << "time 1\n";
        else if(res == 2) cout << "time 2\n";
        else cout << "empate\n"; 
        cout << '\n';
    }        
    cout << '\n';
    return 0;
}
