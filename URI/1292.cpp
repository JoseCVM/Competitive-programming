#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846264338327950288419717
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

double m = sin(108*M_PI/180)/sin(63*M_PI/180);
int main(){
	ios_base::sync_with_stdio(false);
	double l;
	while(cin >> l){
		cout<<fixed << setprecision(10) << l*m << '\n';
	}

	return 0;
}

