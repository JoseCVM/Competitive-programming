#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int TC = 1;
    double a, b;
    while(cin >> a >> b){
        cout << "Projeto "<< TC<<":\n";
        TC++;
        double x = 100*(b/a - 1);
        cout << setprecision(2) << fixed << "Percentual dos juros da aplicacao: " << x << " %\n";
        cout << '\n';
    }
    return 0;
}
