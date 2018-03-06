#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

int main(){
    string a, b;
    int i = 0;
    while(cin >> a >> b){
        i++;
        cout << "Caso #" << i << ":\n";
        int res = 0, p = 0;
        int lasp;
        while ((p = b.find(a, p)) != string::npos) {
          res++;
          lasp = p;
          p++;
        }
        if(res){
            
            cout << "Qtd.Subsequencias: " << res << '\n';
            cout << "Pos: " << lasp+1 << '\n';
        }else{
            cout << "Nao existe subsequencia\n";
        }
        cout << '\n';
    }
    return 0;
}
