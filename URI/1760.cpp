#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define R3 1.73205080757

int main(){
    double mult = sqrt(3)/4.0;
    double divi = 1.0 - (1.0/3.0);
    int l;
    while(cin >> l){
        double lado = l*l;
        double res = (2*lado*R3)/5.0;
        cout << fixed << setprecision(2) <<  res << '\n';
    }
}
