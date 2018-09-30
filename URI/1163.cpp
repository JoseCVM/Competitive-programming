#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define G 9.80665
#define PI 3.14159


int main(){
    double h,n,alpha, v;
    int p1,p2;
    while(cin >> h){
        cin >> p1 >> p2;
        cin >> n;
        for(int i = 0;i<n;i++){
            cin >> alpha >> v;
            alpha = (alpha*PI)/180;
            double Vx = v * cos(alpha);
            double Vy = v * sin(alpha);
            double x = Vx * (sqrt((2*h/G) + pow(Vy/G, 2)) + Vy/G);
            if(x >= p1 && x <= p2)
                cout << fixed << setprecision(5) << x << " -> DUCK\n";
            else
                cout << fixed << setprecision(5) << x << " -> NUCK\n";
        }
    }
    return 0;
}
