#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int a, b, c;
	while(cin >> a >> b >> c){
		int p1 = a+b+c;
		double p = p1/2 + (p1%2 == 0? 0: 0.5);
		double at = sqrt(p*(p-a)*(p-b)*(p-c));
		double r1 = (double)(a*b*c)/(4*at);
		double r2 = at/p;
		double ac1 = r1*r1*PI;
		double ac2 = r2*r2*PI;
		cout << setprecision(4) << fixed << ac1 - at << ' ' << at - ac2 << ' ' <<  ac2 << '\n';
	}
	return 0;
}

