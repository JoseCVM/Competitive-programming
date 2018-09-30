#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define PI 3.141592654

double rad(double dg){
    return PI*dg/180.0;
}

int main(){
    double a, b, c;
    while(cin >> a >> b >> c){
        double x = (tan(rad(a))*b + c)*5.0;
        cout << fixed << setprecision(2) << x << '\n';
    }
}
