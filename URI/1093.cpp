#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int e1,e2,at,d;
    while(cin >> e1 >> e2 >> at >> d && (e1 || e2 || at || d)){
        double pen1 = e1/d + (e1%d == 0 ? 0 : 1);
        double pen2 = e2/d + (e2%d == 0 ? 0 : 1);
        double res;
        if(at == 3){
            res = 100.0*(pen1/(pen2 + pen1));
        }
        else{
            double q2 = (double)(6-at)/6;
            double p1 = 1-q2;
            res = 100.0*(1-(1-pow((p1/q2),pen2))/(1-pow(p1/q2,pen1+pen2)));
        }
        cout <<setprecision(1) << fixed << res << '\n';
    }
    return 0;
}
